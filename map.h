#pragma once

#include "window.h"
#include "atlas.h"

#define MAP_TILE_SIZE 48

#define MAP_WIDTH 33
#define MAP_HEIGHT 19

#define MAP_RENDER_WIDTH 32
#define MAP_RENDER_HEIGHT 18

#define MAP_RENDER_X ((SCREEN_WIDTH - (MAP_RENDER_WIDTH * MAP_TILE_SIZE)) / 2)
#define MAP_RENDER_Y ((SCREEN_HEIGHT - (MAP_RENDER_HEIGHT * MAP_TILE_SIZE)) / 2)

#define TILE_HOLE 0
#define TILE_GROUND 1
#define TILE_WALL 50

#define MAX_NAME_LENGTH 10

#include <SDL2/SDL.h>

enum {
	ET_UKNOWN,
	ET_PLAYER
};

struct Entity
{
	int id;
	int type;
	char name[MAX_NAME_LENGTH];
	int x;
	int y;
	int facing;
	AtlasImage *texture;
	Entity *next;
};

typedef struct
{
	int tile;
	int visible;
	int revealed;
} MapTile;

typedef struct
{
	int entityId;
	Entity entityHead, *entityTail;
	Entity *player;
	MapTile map[MAP_WIDTH][MAP_HEIGHT];
	SDL_Point camera;
} Dungeon;

void initMap(void);
void drawMap(void);
void generateMap(void);
int countWalls(int mx, int my);
void initPlayer(Entity *e);
void doPlayer(void);
void initEntities(void);
void moveEntity(Entity *e, int dx, int dy);
void drawEntities(void);
void updateFogOfWar(void);
int hasLOS(Entity *src, int x2, int y2);
void initEntityFactory(void);
Entity *initEntity(char *name);
void initDungeon(void);
