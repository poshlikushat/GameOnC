#include "main.h"
#include "defs.h"
#include "system/init.h"
#include "system/input.h"
#include "system/draw.h"

int main(int argc, char* argv[]) {
	if(!initSDL()) {
		printf('Init Error!\n');
		return 1;
	}

	bool running = true;
	while (running) {
		handleInput(&running);
		render();
	}

	cleanup();
	return 0;

}