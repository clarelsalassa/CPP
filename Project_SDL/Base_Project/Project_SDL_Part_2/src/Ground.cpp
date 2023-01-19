#include "Ground.h"

Ground::Ground(unsigned int framerate) : framerate_(framerate) {}

Ground::~Ground() {}

void Ground::loop() {
    // loop logic here
}

std::vector<std::shared_ptr<Animal>>& Ground::getAnimals() {
    return animals_;
}

void Ground::addAnimals(std::shared_ptr<Animal> animal) {
    animals_.push_back(animal);
}

void Ground::removeAnimals(std::shared_ptr<Animal> animal) {
    for (auto it = animals_.begin(); it != animals_.end();) {
        if (it->get() == animal.get()) {
            it = animals_.erase(it);
        } else {
            ++it;
        }
    }
}


