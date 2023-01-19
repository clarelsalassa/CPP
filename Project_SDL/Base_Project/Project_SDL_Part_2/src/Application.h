#include <memory>
#include <SDL2/SDL.h>

#include "Ground.h"

class Application {
    public:
        Application(unsigned int framerate, int time);
        ~Application();
        void run();
    private:
        unsigned int framerate_;
        int time_;
        std::unique_ptr<Ground> ground_;
        std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window_;
        std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> surface_;
};


