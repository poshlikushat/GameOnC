#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>

int main()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("SDL_Init Error: %s\n", SDL_GetError());
		return 1;
	}

	if (IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG) == 0)
	{
		printf("IMG_Init Error: %s\n", IMG_GetError());
		SDL_Quit();
		return 1;
	}

	SDL_Quit();
	return 0;
}