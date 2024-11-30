#include "init.h"
#include "defs.h"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

bool initSDL() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL Init Error: %s\n ", SDL_GetError());
		return false;
	}

	if(!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
		printf('SDL_Image Init Error: %s\n ', SDL_GetError());
		SDL_Quit();
		return false;
	}

	window = SDL_CreateWindow("Adventure Game",
										  SDL_WINDOWPOS_UNDEFINED,
										  SDL_WINDOWPOS_UNDEFINED,
										  SCREEN_WIDTH,
										  SCREEN_HEIGHT,
										  SDL_WINDOW_SHOWN);

	if (!window)
	{
		printf('Window Error: %s\n', SDL_GetError());
		SDL_Quit();
		return false;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (!renderer)
	{
		printf('Renderer Error: %s\n', SDL_GetError());
		SDL_DestroyWindow(window);
		SDL_Quit();
		return false;
	}

	return true;
}

void cleanup() {
	if(renderer) SDL_DestroyRenderer(renderer);
	if(window) SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();
}