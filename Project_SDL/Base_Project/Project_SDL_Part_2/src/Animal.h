#include "Moving_object.h"

class Animal : public Moving_object {
public:
    Animal(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    virtual ~Animal();
    virtual void move();
};
