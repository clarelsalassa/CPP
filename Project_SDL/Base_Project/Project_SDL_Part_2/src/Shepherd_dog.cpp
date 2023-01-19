#include "Shepherd_dog.h"

//Shepherd_dog(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
// virtual ~Shepherd_dog();

Shepherd_dog::Shepherd_dog(SDL_Surface *texture) :
    Animal(texture, 0, 0) {
}

void Shepherd_dog::move() {
    // Déplacement en suivant le berger
    // ...
}
