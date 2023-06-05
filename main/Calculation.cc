//
// Created by yjtsa on 2023/6/4.
//

#include "Calculation.h"
#include <cctype>
#include <stdexcept>

bool Calculation::proceed(int num) {
    if(num!=999) return false;

}

bool Calculation::is_number(const std::string& s) {
    for (char const &c : s) {
        if (std::isdigit(c) == 0)
            return false;
    }
    return true;
}

bool Calculation::validOp(char op){
    if(op=='+'||op=='-'){
        return true;
    }
    return false;
}


int Calculation::calculate(char op,int num1,int num2){
    if(op=='+') {
        return sum(num1,num2);
    }
    else if (op == '-') {
        return difference(num1, num2);
    } else
        throw std::invalid_argument("Invalid operator!");

}

int Calculation::sum(int num1, int num2) {
    return num1+num2;
}

int Calculation::difference(int num1, int num2) {
    return num1-num2;
}


