#pragma once
#include <iostream>
#include <stdexcept>

class Fraction
{
private:
	int numerator_; // числитель
	int denominator_; // знаменатель
    

public:
	Fraction(int numerator, int denominator);
    Fraction(const Fraction &f) { numerator_ = f.numerator_; denominator_ = f.denominator_; }
     void display() const;
     void simplify();

    static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    

    Fraction operator-() const {
        return Fraction(-numerator_, denominator_);
    }
    Fraction operator+(const Fraction& other) const {
        int resultNumerator = numerator_ * other.denominator_ + other.numerator_ * denominator_;
        int resultDenominator = denominator_ * other.denominator_;

        return Fraction(resultNumerator, resultDenominator);
    }
     Fraction operator-(const Fraction& other) const {
        int resultNumerator = numerator_ * other.denominator_ - other.numerator_ * denominator_;
        int resultDenominator = denominator_ * other.denominator_;

        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction operator*(const Fraction& other) const{
        int resultNumerator = numerator_ * other.numerator_;
        int resultDenominator = denominator_ * other.denominator_;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction operator/(const Fraction&other) const {
        if (other.numerator_ == 0){
            throw std::invalid_argument("Деление на ноль.");
        }
        int resultNumerator = numerator_ * other.denominator_;
        int resultDenominator = denominator_ * other.numerator_;

        return Fraction(resultNumerator, resultDenominator);
    }
    Fraction& operator++(){
        numerator_ += denominator_;
        return *this;
    }
    Fraction operator--(int){
        numerator_ -= denominator_;
        return *this;
    }
};

