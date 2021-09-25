#include <napi.h>
// #include "samples/functionexample.h"
// #include "samples/classexample.h"
#include "samples/decrypt.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
    // return exports;
    // functionexample::Init(env, exports);
    // return ClassExample::Init(env, exports);

    // return decryptNs::Init(env, exports);
    return Init(env, exports);
}

// NODE_API_MODULE(testaddon, InitAll);
NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll);