#ifndef PLAYABLE_CHARACTER_H
#define PLAYABLE_CHARACTER_H

#include "Moving_object.h"

class Playable_character : public Moving_object {
public:
    // Playable_character(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    // Playable_character(std::unique_ptr<SDL_Surface> texture, int x, int y, int velocity_x, int velocity_y);

    // Constructeur
    Playable_character(SDL_Surface *texture, int velocity_x, int velocity_y);

    // virtual ~Playable_character();

    // Fonction virtuelle pour déplacement
    virtual void move();
};

#endif // PLAYABLE_CHARACTER_H