#include "defs.h"
#include "structs.h"

extern Dungeon dungeon;

void initDangeon(void) {
	initMap();  // Add

	initEntities();  // Add

	initPlayer();  // Add

	dungeon.renderOffset.x = (SCREEN_WIDTH - (MAP_WIDTH * TITLE_SIZE)) / 2;
	dungeon.renderOffset.y = (SCREEN_HEIGHT - (MAP_HEIGHT * TITLE_SIZE)) / 2;

	// app.delegate.logic = &logic;
	// app.delegate.draw = &draw;
}