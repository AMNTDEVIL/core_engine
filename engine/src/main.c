#include <stdio.h>
#include "../engine_config.h"
#include "../engine_version.h"
#include "../include/engine.h"

int main(void){
    engine_init();
    engine_shutdown();
    return 0;
}
