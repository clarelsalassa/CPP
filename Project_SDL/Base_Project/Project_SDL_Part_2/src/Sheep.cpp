#include "Sheep.h"

// Sheep::Sheep(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y)
//     : Animal(std::move(texture), x, y, velocity_x, velocity_y) {}

// Sheep::~Sheep() {}

Sheep::Sheep(SDL_Surface *texture) :
    Animal(texture, 0, 0) {
}

void Sheep::move() {
    // Déplacement aléatoire
    // ...
}
