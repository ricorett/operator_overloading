#include "fraction.h"

Fraction::Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator)
	{
        if (denominator_ == 0){
            throw std::invalid_argument("Деление на ноль.");
        }
		numerator_ = numerator;
		denominator_ = denominator;
	}

    void Fraction::display() const {
        std::cout << numerator_;
        if (numerator_ != 0) std::cout << "/" << denominator_;
    }
    void Fraction::simplify() {
        int commonDenominator = gcd(numerator_, denominator_);
        numerator_ /= commonDenominator;
        denominator_ /= commonDenominator;
        std::cout << numerator_ ;
        if (numerator_ != 0) std::cout << "/" << denominator_;
    }

