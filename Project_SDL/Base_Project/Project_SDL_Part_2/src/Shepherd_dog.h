#ifndef SHEPHERD_DOG_H
#define SHEPHERD_DOG_H

#include "Animal.h"

class Shepherd_dog : public Animal {
public:
    // Shepherd_dog(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    // virtual ~Shepherd_dog();

    // Constructeur
    Shepherd_dog(SDL_Surface *texture);

    // Fonction pour déplacement en suivant le berger
    void move();
};

#endif
