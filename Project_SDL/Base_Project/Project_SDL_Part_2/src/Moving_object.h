#include "rendered_object.h"

class Moving_object : public Rendered_object {
    public:

        Moving_object(std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)> texture, int x, int y, int velocity_x, int velocity_y);
        virtual ~Moving_object() = default;

        int getVelocityX() const;
        int getVelocityY() const;
        void setVelocityX(int velocityX);
        void setVelocityY(int velocityY);
        virtual void move() = 0;
        void step();

    private:
        int velocity_x_;
        int velocity_y_;
};
