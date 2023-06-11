//
// Created by yjtsa on 2023/6/4.
//

#include "Calculation.h"
#include <cctype>
#include <stdexcept>
#include <cmath>

bool Calculation::isQualified(double num) {
    if (num == 999) { return false; }
    return true;
}

bool Calculation::isNumber(const std::string &s) {
    bool decimalPoint = false;
    for (char const &c: s) {
        if (std::isdigit(c) == 0){
            if(c=='.'&&!decimalPoint){
                decimalPoint= true;
                continue;
            }
            return false;
        }
    }
    return true;
}

bool Calculation::validOp(char op) {
    if (op == '+' || op == '-') {
        return true;
    }
    return false;
}


double Calculation::calculate(char op, double num1, double num2) {
    if (op == '+') {
        return add(num1, num2);
    } else if (op == '-') {
        return substract(num1, num2);
    } else {

        throw std::invalid_argument("Invalid operator!");
    }

}

double Calculation::add(double num1, double num2) {
    return num1 + num2;
}

double Calculation::substract(double num1, double num2) {
    return num1 - num2;
}

bool Calculation::isValid(double num) {
    if (std::isinf(num) || std::isnan(num)) {
        return false;
    }
    return true;
}
