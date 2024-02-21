#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}


    bool operator==(const Fraction &f) const {
        return (this->numerator_ * f.denominator_ == f.numerator_ * this->denominator_);
    }

    bool operator!=(const Fraction &f) const {
        return !(*this == f);
    }

    bool operator<(const Fraction &f) const {
        return (this->numerator_ * f.denominator_ < f.numerator_ * this->denominator_);
    }

    bool operator>(const Fraction &f) const {
        return (this->numerator_ * f.denominator_ > f.numerator_ * this->denominator_);
    }

    bool operator<=(const Fraction &f) const {
        return (this->numerator_ * f.denominator_ <= f.numerator_ * this->denominator_);
    }

    bool operator>=(const Fraction &f) const {
        return (this->numerator_ * f.denominator_ >= f.numerator_ * this->denominator_);
    }

};
