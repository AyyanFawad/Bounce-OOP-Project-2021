#include "ball.hpp"
void Ball::draw(SDL_Renderer *gRenderer, SDL_Texture *assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    moverRect.x += 2;
}
Ball::Ball()
{
    srcRect = {146, 344, 218, 217};
    moverRect = {30, 40, 50, 60};
}