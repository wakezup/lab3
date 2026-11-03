#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>


class Human {
 public:
    Human(std::string name, int height);
    std::string print() const;

 private:
    std::string name_;
    int height_;
};

#endif  // HUMAN_H_
