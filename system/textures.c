#include "textures.h"
#include "init.h"


SDL_Texture *texture = NULL;

SDL_Texture * loadTexture(const char *path) {
	SDL_Surface *surface = IMG_Load(path);
	if(!surface) {
		printf("Image Error: %s\n", IMG_GetError());
		return NULL;
	}

	texture = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);

	if(!texture) {
		printf("Texture Error: %s\n", SDL_GetError());
	}
	
	return texture;
}