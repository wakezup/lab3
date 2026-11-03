#include "City.h"

#include <utility>

/*
City::City(std::string name) : name_(std::move(name)) {}

void City::addPath(const City& destination, int cost) {
    paths_.push_back({&destination, cost});
}

std::string City::print() const {
    std::string result = name_ + " {";
    bool first_path = true;

    for (const Path& path : paths_) {
        if (!first_path) {
            result += ", ";
        }
        result += path.destination->name_ + ": " + std::to_string(path.cost);
        first_path = false;
    }

    return result + "}";
}
*/

City::City(std::string name) : name_(std::move(name)) {}

City::City(std::string name, std::vector<Path> paths)
    : name_(std::move(name)), paths_(std::move(paths)) {}

void City::addPath(const City& destination, int cost) {
    paths_.push_back({&destination, cost});
}

std::string City::print() const {
    std::string result = name_ + " {";
    bool first_path = true;

    for (const Path& path : paths_) {
        if (!first_path) {
            result += ", ";
        }
        result += path.destination->name_ + ": " + std::to_string(path.cost);
        first_path = false;
    }

    return result + "}";
}