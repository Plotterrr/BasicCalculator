//
// Created by yjtsa on 2023/6/4.
//

#ifndef BASICCALCULATOR_CALCULATION_H
#define BASICCALCULATOR_CALCULATION_H
#include <stdexcept>
#include <string>

class Calculation {
public:
    //check if a number is 999
    bool isQualified(double num);


    bool isNumber(const std::string& s);

    bool validOp(char op);

    double calculate(char op,double num1,double num2);
    bool isValid(double num);


    double add(double num1, double num2);
    double substract(double num1, double num2);
};



#endif //BASICCALCULATOR_CALCULATION_H
