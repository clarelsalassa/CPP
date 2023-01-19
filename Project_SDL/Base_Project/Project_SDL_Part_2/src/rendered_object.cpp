#include "rendered_object.h"

Rendered_object::Rendered_object(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y)
    : texture_(std::move(texture)), x_(x), y_(y) {}

Rendered_object::~Rendered_object() {}

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

void Rendered_object::draw(std::unique_ptr<SDL_Surface>& screen) const {
    // drawing logic here
}


