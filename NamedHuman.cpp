#include "NamedHuman.h"

#include <utility>

NamedHuman::NamedHuman(Name name, int height)
    : name_(std::move(name)), height_(height) {}

std::string NamedHuman::print() const {
    return name_.print() + ", рост: " + std::to_string(height_);
}