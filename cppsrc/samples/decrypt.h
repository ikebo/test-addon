#include <napi.h>

// char* decrypt(char* encrypted_config);
// namespace decryptNs {
//     extern "C" char* decrypt(char* encrypted_config);
//     Napi::String DecryptWrapped(const Napi::CallbackInfo& info);
//     Napi::Object Init(Napi::Env env, Napi::Object exports);
// }

// extern "C" char* decrypt(char* encrypted_config);
extern "C" char* decrypt(char* encrypted_config);
// std::string decrypt(char* encrypted_config);
Napi::String DecryptWrapped(const Napi::CallbackInfo& info);
Napi::Object Init(Napi::Env env, Napi::Object exports);

