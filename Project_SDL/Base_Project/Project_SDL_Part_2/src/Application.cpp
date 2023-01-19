#include "Application.h"


Application::Application(unsigned int framerate, int time) : framerate_(framerate), time_(time) {
    ground_ = std::unique_ptr<Ground>(framerate_);
    window_ = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>(SDL_CreateWindow("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0), SDL_DestroyWindow);
    surface_ = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>(SDL_GetWindowSurface(window_.get()), SDL_FreeSurface);
}

Application::~Application() {}

void Application::run() {
    // run logic here
}
