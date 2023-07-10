#include "coordinates.h"
#include <SDL2/SDL.h>

extern SDL_Window *window;

/* window renderer */
extern SDL_Renderer *renderer;

/* texture */
extern SDL_Texture *texture;

/* buffer for textures */
extern uint32_t buffer[SCREEN_HEIGHT][SCREEN_WIDTH];

/* array of textures */
extern uint32_t tiles[TEX_COUNT][TEX_HEIGHT][TEX_WIDTH];

/* X and Y start position */
extern point_t pos;

/* initial direction vector */
extern point_t dir;

/* camera plane */
extern point_t plane;

/* time of current frame */
extern double time;


int *scanMap(char *filename, int *map);
void loadTextures(char *mapName);

bool initSDL(void);
void updateRenderer(bool textured);
void closeSDL(void);

void input(int *maze);
bool quit(void);

void raycaster(int *maze, bool textured);
void renderWalls(int *maze, SDL_Point map, point_t rayPos, point_t rayDir, double distToWall, int x, int side, bool textured);
void renderBGFlat(void);
void renderBGTex(SDL_Point map, point_t rayDir, double distToWall, double wallX, int drawEnd, int x, int side);

#endif /* MAZE_H */

