#include "Shepherd_dog.h"

Shepherd_dog::Shepherd_dog(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y)
    : Animal(std::move(texture), x, y, velocity_x, velocity_y) {}

Shepherd_dog::~Shepherd_dog() {}

void Shepherd_dog::move() {
    // shepherd_dog move logic here
}
