#ifndef INTERACTING_OBJECT_H
#define INTERACTING_OBJECT_H

#include <set>
#include <string>

class Interacting_object {
    public:
        Interacting_object() = default;
        ~Interacting_object() = default;

        std::set<std::string> getProperties() const;
        void setProperties(std::set<std::string> properties);
        void addProperty(std::string property);
        void removeProperty(std::string property);

    private:
        std::set<std::string> properties_;
};

#endif // INTERACTING_OBJECT_H