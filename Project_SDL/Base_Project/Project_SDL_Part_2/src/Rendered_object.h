#ifndef RENDERED_OBJECT_H
#define RENDERED_OBJECT_H

#include "Interacting_object.h"

#include <SDL2/SDL.h>

class Rendered_object : public Interacting_object {
public:
    // Rendered_object(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y);
    // Rendered_object(std::unique_ptr<SDL_Surface> texture, int x, int y);
    // virtual ~Rendered_object();

    Rendered_object(SDL_Surface *texture);

    // Accesseur pour la position
    int getX() const;
    int getY() const;

    // Mutateur pour la position
    void setX(int x);
    void setY(int y);

    // Fonction pour dessiner l'objet sur l'écran
    // virtual void draw(std::unique_ptr<SDL_Surface>& screen) const;
    void draw(SDL_Surface *screen);



    // SDL_Rect position() const;
    // void set_position(const SDL_Rect& position);

    // SDL_Surface* texture() const;
    void set_texture(SDL_Surface* texture);

private:
    // std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture_;
    // SDL_Rect position_;
    // SDL_Surface* texture_;
    // std::unique_ptr<SDL_Surface> texture_;
    SDL_Surface *texture_;
    int x_, y_;
    
};

#endif // RENDERED_OBJECT_H