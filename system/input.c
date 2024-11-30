#include <input.h>
#include <SDL2/SDL.h>

void handleInput(bool *running) {
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_Quit)
		{
			running = false; 	/*	ChatGPT cказал, что тут нужно *running,
								 *	Но, что-то я сомневаюсь. Проверь, плиз.
								 */
		}
		// Обработка других событий
	}
}