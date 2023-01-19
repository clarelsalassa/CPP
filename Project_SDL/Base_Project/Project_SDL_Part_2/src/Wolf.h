#include "Animal.h"

class Wolf : public Animal {
public:
    Wolf(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    virtual ~Wolf();
    void move();
};
