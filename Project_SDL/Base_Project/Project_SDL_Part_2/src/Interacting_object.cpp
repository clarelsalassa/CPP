#include "Interacting_object.h"

Interacting_object::~Interacting_object() {}

std::set<std::string> Interacting_object::getProperties() const {
    return properties_;
}

void Interacting_object::setProperties(std::set<std::string> properties) {
    properties_ = properties;
}

void Interacting_object::addProperty(std::string property) {
    properties_.insert(property);
}

void Interacting_object::removeProperty(std::string property) {
    properties_.erase(property);
}
