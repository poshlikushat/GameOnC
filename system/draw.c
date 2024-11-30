#include "draw.h"
#include "init.h"

void render() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	// Отрисовка объектов

	SDL_RenderPresent(renderer);
}