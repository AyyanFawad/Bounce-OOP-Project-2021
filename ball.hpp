#include <SDL.h>

class Ball
{
    SDL_Rect srcRect, moverRect;

public:
    // add the fly function here as well.
    void draw(SDL_Renderer *, SDL_Texture *assets);
    Ball(); // may add other overloaded constructors here...
};
