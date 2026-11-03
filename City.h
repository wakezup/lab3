#ifndef CITY_H_
#define CITY_H_

#include <string>
#include <vector>


/*
class City {
 public:
    struct Path {
        const City* destination;
        int cost;
    };

    explicit City(std::string name);

    void addPath(const City& destination, int cost);
    std::string print() const;

 private:
    std::string name_;
    std::vector<Path> paths_;
};
*/

class City {
 public:
    struct Path {
        const City* destination;
        int cost;
    };

    explicit City(std::string name);
    City(std::string name, std::vector<Path> paths);

    void addPath(const City& destination, int cost);
    std::string print() const;

 private:
    std::string name_;
    std::vector<Path> paths_;
};

#endif  // CITY_H_
