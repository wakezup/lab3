#include "Human.h"

#include <utility>

Human::Human(std::string name, int height)
    : name_(std::move(name)), height_(height) {}

std::string Human::print() const {
    return name_ + ", рост: " + std::to_string(height_);
};