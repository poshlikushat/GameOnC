#pragma once

#include "defs.h"

typedef struct {
	int data [MAP_WIDTH] [MAP_HEIGHT];
} Map;



typedef struct
{
	int x;
	int y;
	int facing;
	// AtlasImage *texture;
	struct Entity *next;
} Entity;

typedef struct {
	SDL_Point renderOffset;
	Entity entityHead, *entityTail;
	Map map;
} Dungeon;


