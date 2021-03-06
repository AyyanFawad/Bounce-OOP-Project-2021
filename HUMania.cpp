#include <iostream>
#include "HUMania.hpp"
void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    b1.draw(gRenderer, assets);
}

void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}

HUMania::HUMania(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}