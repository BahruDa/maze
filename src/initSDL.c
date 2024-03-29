#include"maze.h"

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;

/**
 * initSDL - initializes SDL, window, and renderer
 * Return: True on success, False on failure
 */
bool initSDL(void)
{
    bool success = true;

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        SDL_Log("SDL could not initialize! SDL_Error: %s", SDL_GetError());
        success = false;
    }

    window = SDL_CreateWindow("Maze", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        SDL_Log("Window could not be created! SDL_Error: %s", SDL_GetError());
        success = false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL)
    {
        SDL_Log("Renderer could not be created! SDL_Error: %s", SDL_GetError());
        success = false;
    }

    return success;
}
