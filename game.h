#pragma once

#define SCREEN_WIDTH   1280
#define SCREEN_HEIGHT  720

typedef struct {
    SDL_Renderer *renderer;
    SDL_Window *window;
} App;

extern App app;


void initSDL(void);
void doInput(void);
void prepareScene(void);
void presentScene(void);
void cleanup(void);