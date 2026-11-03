#include "Fractions.h"


namespace {

int GreatestCommonDivisor(int numerator, int denominator) {
    int first = numerator;
    int second = denominator;

    if (first < 0) {
        first = -first;
    }
    if (second < 0) {
        second = -second;
    }

    while (second != 0) {
        const int remainder = first % second;
        first = second;
        second = remainder;
    }

    return first;
}

}  // namespace

Fraction::Fraction(int numerator, int denominator)
    : numerator_(numerator), denominator_(denominator) {
    const int divisor = GreatestCommonDivisor(numerator_, denominator_);
    if (divisor != 0) {
        numerator_ = numerator_ / divisor;
        denominator_ = denominator_ / divisor;
    }
}

Fraction::Fraction(int integer) : numerator_(integer), denominator_(1) {}

std::string Fraction::print() const {
    if (denominator_ == 1) {
        return std::to_string(numerator_);
    }
    return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}

Fraction operator+(const Fraction& lhs, const Fraction& rhs) {
    return Fraction(lhs.numerator_ * rhs.denominator_ +
                        rhs.numerator_ * lhs.denominator_,
                    lhs.denominator_ * rhs.denominator_);
}

Fraction operator-(const Fraction& lhs, const Fraction& rhs) {
    return Fraction(lhs.numerator_ * rhs.denominator_ -
                        rhs.numerator_ * lhs.denominator_,
                    lhs.denominator_ * rhs.denominator_);
}

Fraction operator*(const Fraction& lhs, const Fraction& rhs) {
    return Fraction(lhs.numerator_ * rhs.numerator_,
                    lhs.denominator_ * rhs.denominator_);
}

Fraction operator/(const Fraction& lhs, const Fraction& rhs) {
    return Fraction(lhs.numerator_ * rhs.denominator_,
                    lhs.denominator_ * rhs.numerator_);
}