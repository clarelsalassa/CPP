#include "Playable_character.h"

// Playable_character::Playable_character(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y)
//     : Moving_object(std::move(texture), x, y, velocity_x, velocity_y) {}

// Playable_character::~Playable_character() {}

// void Playable_character::move() {
//     // move logic here
// }

Playable_character::Playable_character(SDL_Surface *texture, int velocity_x, int velocity_y) :
    Moving_object(texture, velocity_x, velocity_y) {}