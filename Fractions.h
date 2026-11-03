#ifndef FRACTIONS_H_
#define FRACTIONS_H_

#include <string>


class Fraction {
 public:
    Fraction(int numerator, int denominator);
    Fraction(int integer);

    std::string print() const;

    friend Fraction operator+(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator-(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator*(const Fraction& lhs, const Fraction& rhs);
    friend Fraction operator/(const Fraction& lhs, const Fraction& rhs);

 private:
    int numerator_;
    int denominator_;
};

#endif  // FRACTIONS_H_
