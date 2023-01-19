#ifndef GROUND_H
#define GROUND_H

#include "Application.h"

class Ground {
public:
    // Constructeur
    Ground(unsigned int framerate);
    //~Ground();

    // Boucle principale
    // void loop();
    void loop(SDL_Window *window);
    

    // std::vector<std::shared_ptr<Animal>>& getAnimals();
    // void addAnimals(std::shared_ptr<Animal>);
    // void removeAnimals(std::shared_ptr<Animal>);

private:
    unsigned int framerate_;
    // std::vector<std::shared_ptr<Animal>> animals_;
    std::vector<std::unique_ptr<Animal>> animals_;
};

#endif // GROUND_H