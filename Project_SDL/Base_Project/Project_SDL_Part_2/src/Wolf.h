#ifndef WOLF_H
#define WOLF_H

#include "Animal.h"

class Wolf : public Animal {
public:
    // Wolf(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    // virtual ~Wolf();
    // void move();

    // Constructeur
    Wolf(SDL_Surface *texture);

    // Fonction pour déplacement aléatoire ou vers l'agneau le plus proche
    void move();
};


#endif // WOLF_H
