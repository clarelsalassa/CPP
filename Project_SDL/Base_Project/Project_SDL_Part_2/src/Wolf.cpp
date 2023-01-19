#include "Wolf.h"

// Wolf::Wolf(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y)
//     : Animal(std::move(texture), x, y, velocity_x, velocity_y) {}

// Wolf::~Wolf() {}

Wolf::Wolf(SDL_Surface *texture) :
    Animal(texture, 0, 0) {
}

void Wolf::move() {
    // Déplacement aléatoire ou vers l'agneau le plus proche
    // ...
}