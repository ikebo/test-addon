#include "decrypt.h"

// Napi::String decryptNs::DecryptWrapped(const Napi::CallbackInfo& info) {
Napi::String DecryptWrapped(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    if (info.Length() != 1 || !info[0].IsString()) {
        Napi::TypeError::New(env, "String expected").ThrowAsJavaScriptException();
    }
    Napi::String arg = info[0].As<Napi::String>();
    std::string str = arg.Utf8Value();
    // const char* cstr = str.c_str();
    char *cstr = &str[0];
    Napi::String rv = Napi::String::New(env, decrypt(cstr));
    return rv;
}

// Napi::Object decryptNs::Init(Napi::Env env, Napi::Object exports) {
Napi::Object Init(Napi::Env env, Napi::Object exports) {
    // exports.Set("decrypt", Napi::Function::New(env, decryptNs::DecryptWrapped));
    exports.Set("decrypt", Napi::Function::New(env, DecryptWrapped));
    return exports;
}
