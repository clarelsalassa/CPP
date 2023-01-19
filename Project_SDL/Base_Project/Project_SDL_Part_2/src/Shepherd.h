#include "playable_character.h"

class Shepherd : public Playable_character {
public:
    Shepherd(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    virtual ~Shepherd();
    void move();
    void make_dogs_clickable(); 
};
