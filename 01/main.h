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
    
    bool operator==(Fraction &f){
        return((double)(this->numerator_ / this->denominator_) == (double)(f.numerator_ / f.denominator_)) ? true : false;
    }
    bool operator!=(Fraction &f) {
        return !(*this == f);
    }
    bool operator<(Fraction &f){
        return((double)(this->numerator_ / this->denominator_) < (double)(f.numerator_ / f.denominator_)) ? true : false;
    }
     bool operator>(Fraction &f){
        return !(*this < f);
    }
     bool operator<=(Fraction &f){
        return((double)(this->numerator_ / this->denominator_) <= (double)(f.numerator_ / f.denominator_)) ? true : false;
    }
     bool operator>=(Fraction &f){
        return !(*this <= f);
    }
};
