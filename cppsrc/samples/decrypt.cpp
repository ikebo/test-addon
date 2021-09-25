#include <string.h>
#include "decrypt.h"
#include "../lib/b64.h"
#include <stdio.h>
#include <stdlib.h>

int split(char* str, char *sep, char** rv) {
    int idx = 0;
    char* token = strtok(str, sep);
    while (token != NULL) {
        rv[idx++] = token;
        token = strtok(NULL, sep);
    }
    return idx;
}

void get_port(char* raw_port, char* real_port) {
    int t = 65535 - atoi(raw_port) / 13;
    sprintf(real_port, "%d", t);
}

void get_ip(char* raw_ip, char* real_ip) {
    char* arr[12];
    split(raw_ip, ".", arr);
    strcat(real_ip, arr[2]);
    strcat(real_ip, ".");
    strcat(real_ip, arr[8]);
    strcat(real_ip, ".");
    strcat(real_ip, arr[6]);
    strcat(real_ip, ".");
    strcat(real_ip, arr[10]);
}

char* decrypt(char* encrypted_config) {
    size_t len;
    unsigned char* config_t = base64_decode(encrypted_config, strlen(encrypted_config), &len);
    char* config = (char *) config_t;
    char config_arr[len];
    strncpy(config_arr, config, len);

    char* split_arr[12];
    split(config_arr, "://", split_arr);
    char* protocol = split_arr[0];
    char* raw_port = split_arr[1];
    char* name = split_arr[2];
    char* method = split_arr[3];
    char* raw_ip = split_arr[4];
    char* key = split_arr[5];
    char real_port[6] = {0};
    char real_ip[25] = {0};
    
    get_port(raw_port, real_port);
    get_ip(raw_ip, real_ip);

    // // char* rv = malloc(100);
    // 不在堆上分配，在静态区分配，全局只有一份，进程结束时释放
    static char rv[100];
    sprintf(rv, "%s://%s:%s:%s:%s:%s", protocol, name, method, real_ip, real_port, key);
    // // printf("rv: %s\n", rv);
    free(config_t);
    return rv;
}
