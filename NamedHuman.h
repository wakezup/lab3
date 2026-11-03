#ifndef NAMED_HUMAN_H_
#define NAMED_HUMAN_H_

#include "Name.h"

#include <string>


class NamedHuman {
 public:
    NamedHuman(Name name, int height);

    std::string print() const;

 private:
    Name name_;
    int height_;
};

#endif  // NAMED_HUMAN_H_
