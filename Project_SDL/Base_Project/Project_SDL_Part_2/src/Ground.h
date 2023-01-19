#include "Animal.h"
#include <memory>
#include <vector>

class Ground {
public:
    Ground(unsigned int framerate);
    ~Ground();
    void loop();
    std::vector<std::shared_ptr<Animal>>& getAnimals();
    void addAnimals(std::shared_ptr<Animal>);
    void removeAnimals(std::shared_ptr<Animal>);

private:
    unsigned int framerate_;
    std::vector<std::shared_ptr<Animal>> animals_;
};
