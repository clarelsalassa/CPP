#ifndef APPLICATION_H
#define APPLICATION_H

#include <memory>
#include <vector>
#include "Animal.h"
#include "Ground.h"

class Application {
    public:
        // Application(unsigned int framerate, int time);
        // ~Application();
        // void run();

        // Constructeur
        Application(unsigned int framerate, unsigned int duration);

        // Fonction principale
        int run();


    private:
        unsigned int framerate_;
        unsigned int duration_;
        Ground ground_;
        SDL_Window *window_;
        SDL_Surface *screen_;

        // unsigned int framerate_;
        // int time_;
        // std::unique_ptr<Ground> ground_;
        // std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window_;
        // std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surface_;
};

#endif // APPLICATION_H


