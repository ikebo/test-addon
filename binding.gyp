{
    "targets": [{
        "target_name": "testaddon",
        "cflags!": [ "-fno-exceptions" ],
        "cflags_cc!": [ "-fno-exceptions" ],
        "sources": [
            "cppsrc/main.cpp",
            # "cppsrc/lib/b64.c",
            # "cppsrc/samples/decrypt.cpp",
            "cppsrc/samples/decrypt_wrapper.cpp"
            # "cppsrc/samples/functionexample.cpp",
            # "cppsrc/samples/actualclass.cpp",
            # "cppsrc/samples/classexample.cpp"
        ],
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")",
            # "cppsrc/lib"
        ],
        'libraries': [
            # "cppsrc/lib/libdecrypt.so"
            # "/tmp/libdecrypt.so"
            # "/usr/local/lib/libdecrypt.so"
            "-ldecrypt",
            # "-L/usr/local/lib"
            "-L../cppsrc/lib"
        ],
        # "ldflags": [
        # rpath -> LD_LIBRARY_PATH
        #   "-Wl,-rpath,'/Users/didi/PythonProjects/proxy-server/electron-apps/test-addon'"
        # ],
        'dependencies': [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
        'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }]
}