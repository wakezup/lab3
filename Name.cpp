#include "Name.h"

#include <utility>

Name::Name(std::string surname,
           std::string firstname,
           std::string patronymic)
    : surname_(std::move(surname)),
      firstname_(std::move(firstname)),
      patronymic_(std::move(patronymic)) {}

std::string Name::print() const {
    std::string result;

    if (!surname_.empty()) {
        result = surname_;
    }
    if (!firstname_.empty()) {
        if (!result.empty()) {
            result += ' ';
        }
        result += firstname_;
    }
    if (!patronymic_.empty()) {
        if (!result.empty()) {
            result += ' ';
        }
        result += patronymic_;
    }

    return result;
}