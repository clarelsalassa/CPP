#include <memory>
#include <SDL2/SDL.h>

#include "Interacting_object.h"

class Rendered_object : public Interacting_object {
public:
    Rendered_object(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y);
    virtual ~Rendered_object();

    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    virtual void draw(std::unique_ptr<SDL_Surface>& screen) const;

private:
    std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture_;
    int x_;
    int y_;
};

