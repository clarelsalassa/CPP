#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"

class Sheep : public Animal {
public:
    // Sheep(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    // virtual ~Sheep();
    // void move();


    // Constructeur
    Sheep(SDL_Surface *texture);

    // Fonction pour déplacement aléatoire
    void move();
};

#endif

