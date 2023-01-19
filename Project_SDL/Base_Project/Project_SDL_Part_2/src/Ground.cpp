#include "Ground.h"

Ground::Ground(unsigned int framerate) : framerate_(framerate) {}

// Ground::~Ground() {}

// void Ground::loop() {
//     // loop logic here
// }

void Ground::loop(SDL_Window *window) {
    while (true) {
        // Mise à jour des positions des animaux
        for (auto &animal : animals_) {
            animal->move();
            animal->step();
        }

        // Dessin des animaux sur l'écran
        for (auto &animal : animals_) {
            animal->draw(screen);
        }

        // Mise à jour de l'écran
        // SDL_UpdateWindowSurface(window_.get());
        SDL_UpdateWindowSurface(window_);

        // Attente pour obtenir le framerate souhaité
        SDL_Delay(1000 / framerate_);
    }
}


// std::vector<std::shared_ptr<Animal>>& Ground::getAnimals() {
//     return animals_;
// }

// void Ground::addAnimals(std::shared_ptr<Animal> animal) {
//     animals_.push_back(animal);
// }

// void Ground::removeAnimals(std::shared_ptr<Animal> animal) {
//     for (auto it = animals_.begin(); it != animals_.end();) {
//         if (it->get() == animal.get()) {
//             it = animals_.erase(it);
//         } else {
//             ++it;
//         }
//     }
// }


