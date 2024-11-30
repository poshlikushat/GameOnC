#pragma once

#include "defs.h"

typedef struct {
	int data [MAP_WIDTH] [MAP_HEIGHT];
} Map;

struct Entity
{
	int x;
	int y;
	int facing;
	AtlasImage * texture;
	Entity *next;
};


typedef struct {
	SDL_Point renderOffset;
	Entity entityHead, *entityTail;
	Map map;
} Dungeon;


