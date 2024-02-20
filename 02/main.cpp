#include "fraction.h"
#include <iostream>

int main(){
    int num1 = 0, num2 = 0, dem1 = 0, dem2 = 0;
    int commonDenominator;
    std::cout << "Введите числитель дроби 1: ";
    std::cin >> num1;

    std::cout << "Введите знаменатель дроби 1: ";
    std::cin >> dem1;

    std::cout << "Введите числитель дроби 2: ";
    std::cin >> num2;
    
    std::cout << "Введите знаменатель дроби 2: ";
    std::cin >> dem2;

    
    try {
    Fraction f1(num1, dem1);
	Fraction f2(num2, dem2);
    

    
    
        Fraction sumFraction = f1 + f2;
        f1.display();
        std::cout << " + ";
        f2.display();
        std::cout << " = ";
        sumFraction.simplify();
        std::cout << std::endl;
        
        Fraction subFraction = f1 - f2;
        f1.display();
        std::cout  << " - ";
        f2.display(); 
        std::cout << " = ";
        subFraction.simplify();
        std::cout  << std::endl;
        
        Fraction multFraction = f1 * f2;
        f1.display();
        std::cout  << " * ";
        f2.display();
        std::cout  << " = ";
        multFraction.simplify();
        std::cout << std::endl;
        
        Fraction divFraction = f1 / f2;   
        f1.display();
        std::cout << " / ";
        f2.display();
        std::cout << " = ";
        divFraction.simplify();
        std::cout << std::endl;  
        

               std::cout << "++";
        f1.display();
        Fraction increment = ++f1;
        multFraction = increment * f2;

        std::cout << " * ";
        f2.display();
        std::cout << " = ";
        multFraction.simplify();
        std::cout << std::endl;


        std::cout << "Значение дроби 1 = ";
        f1.display();
        std::cout << std::endl;

        f1.display();
        multFraction = f1-- * f2;
        std::cout << "-- * ";
        f2.display();
        std::cout  << " = "; 
        multFraction.simplify();
        std::cout << std::endl;
        std::cout << "Значение дроби 1 = ";
        f1.display();
        std::cout << std::endl;

    } catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    return 0;
}
