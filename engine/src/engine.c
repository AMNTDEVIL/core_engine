#include <stdio.h>
#include "../engine_config.h"
#include "../engine_version.h"
#include "../include/engine.h"

int engine_init(void) {
    #if ENGINE_ENABLE_LOGGING
        printf("[%s] ENGINE v%s initialized\n", ENGINE_NAME, ENGINE_VERSION_STRING);
        fflush(stdout);
    #endif
    return 0;
}

int engine_shutdown(void){
    #if ENGINE_ENABLE_LOGGING
        printf("[%s] ENGINE shutdown\n", ENGINE_NAME);
        fflush(stdout);
    #endif
    return 0;
}
