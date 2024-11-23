#pragma once

#include <SDL2/SDL.h>

typedef struct {
	SDL_Texture *texture;
	int x;
	int y;
	int width;
	int height;
} AtlasImage;
