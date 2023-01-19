#include "Moving_object.h"

class Playable_character : public Moving_object {
public:
    Playable_character(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
    virtual ~Playable_character();

    virtual void move();
};
