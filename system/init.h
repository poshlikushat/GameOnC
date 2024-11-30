#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdbool.h>
#include <stdio.h>

bool initSDL();
void cleanup();

extern SDL_Window *window;
extern SDL_Renderer *renderer;