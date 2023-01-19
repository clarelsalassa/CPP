#include "Rendered_object.h"

// Rendered_object::Rendered_object(std::unique_ptr<SDL_Surface> texture, int x, int y)
//     : texture_(std::move(texture)), x_(x), y_(y) {}

// Rendered_object::~Rendered_object() {}

Rendered_object::Rendered_object(SDL_Surface *texture) : texture_(texture) {}

int Rendered_object::getX() const {
    return x_;
}

int Rendered_object::getY() const {
    return y_;
}

void Rendered_object::setX(int x) {
    x_ = x;
}

void Rendered_object::setY(int y) {
    y_ = y;
}

// void Rendered_object::draw(std::unique_ptr<SDL_Surface>& screen) const {
    // drawing logic here
// }

void Rendered_object::draw(SDL_Surface *screen) {
    SDL_Rect rect = {x_, y_, texture_->w, texture_->h};
    SDL_BlitSurface(texture_, NULL, screen, &rect);
}


// SDL_Surface* Rendered_object::texture() const {
//     return texture_.get();
// }

void Rendered_object::set_texture(SDL_Surface* texture) {
    texture_.reset(texture);
}





