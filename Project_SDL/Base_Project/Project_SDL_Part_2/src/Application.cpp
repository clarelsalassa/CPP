#include "Application.h"


// Application::Application(unsigned int framerate, int time) : framerate_(framerate), time_(time) {
//     ground_ = std::unique_ptr<Ground>(framerate_);
//     window_ = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>(SDL_CreateWindow("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0), SDL_DestroyWindow);
//     surface_ = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>(SDL_GetWindowSurface(window_.get()), SDL_FreeSurface);
// }

// Application::~Application() {}

// void Application::run() {
//     // run logic here
// }

Application::Application(unsigned int framerate, unsigned int duration) :
    framerate_(framerate), duration_(duration), ground_(framerate) {
}

int Application::run() {
    // Initialisation de SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return 1;
    }

    // Création de la fenêtre
    window_ = SDL_CreateWindow("Shepherd Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (!window_) {
        return 1;
    }

    // Obtention de la surface de la fenêtre
    screen_ = SDL_GetWindowSurface(window_);

    // Boucle principale
    Uint32 start_time = SDL_GetTicks();
    ground_.loop(screen_);

    // Libération des ressources et quitter SDL
    SDL_FreeSurface(screen_);
    SDL_DestroyWindow(window_);
    SDL_Quit();

    return 0;
}
