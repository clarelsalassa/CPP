#ifndef ANIMAL_H
#define ANIMAL_H

#include "Moving_object.h"

class Animal : public Moving_object {
public:
    // Animal(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    // virtual ~Animal();

    // Constructeur
    Animal(SDL_Surface *texture, int velocity_x, int velocity_y);

    // Fonction virtuelle pour déplacement
    virtual void move() = 0;
};

#endif // ANIMAL_H