#include "Animal.h"

class Shepherd_dog : public Animal {
public:
    Shepherd_dog(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    virtual ~Shepherd_dog();
    void move();
};
