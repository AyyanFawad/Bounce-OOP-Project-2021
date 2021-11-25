#include <SDL.h>
#include "ball.hpp"
class HUMania
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    Ball b1;

public:
    HUMania(SDL_Renderer *, SDL_Texture *);
    void drawObjects();
    void createObject(int, int);
};