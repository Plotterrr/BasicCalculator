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
    bool proceed(int num);

    bool is_number(const std::string& s);

    bool validOp(char op);

    int calculate(char op,int num1,int num2);

    int sum(int num1, int num2);
    int difference(int num1, int num2);



};



#endif //BASICCALCULATOR_CALCULATION_H
