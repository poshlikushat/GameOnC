#include <stdlib.h>
#include <stdio.h>
#include "window.h"

int main(int argc, char *argv[]) {
    memset(&app, 0, sizeof(App));

    initSDL();

    atexit(cleanup);

    while(1) {

        doInput();

        SDL_Delay(16);
    }


    return 0;
}
