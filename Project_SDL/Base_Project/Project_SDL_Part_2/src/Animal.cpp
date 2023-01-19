#include "Animal.h"

Animal::Animal(SDL_Surface *texture, int velocity_x, int velocity_y) :
    Moving_object(texture, velocity_x, velocity_y) {
}
