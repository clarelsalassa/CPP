#include "Application.h"

int main(int argc, char *argv[]) {
    Application app(60, 10); // 60 fps pendant 10 secondes
    return app.run();
}
