#ifndef NAME_H_
#define NAME_H_

#include <string>


class Name {
 public:
    Name(std::string surname = "", std::string firstname = "",
         std::string patronymic = "");

    std::string print() const;

 private:
    std::string surname_;
    std::string firstname_;
    std::string patronymic_;
};

#endif  // NAME_H_
