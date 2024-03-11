#include "SDL.h"
#include <stdio.h>

typedef struct
{
    int x, y;
    short life;
    char *name;
} Man;


int main(int argc, const char *argv[])
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    window = SDL_CreateWindow("Game Window",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              640,
                              480,
                              0
                              );
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    SDL_Rect rect = { 220, 140, 200, 200 };
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
    
}
