#include <iostream>
#include "stage1/main/Calculation.h"

int main() {

    std::string input;
    int num1, num2;
    char op;
    Calculation cal;

    do {
        std::cout << "Enter the first number: ";
        std::cin >> input;

        if (!cal.is_number(input)) {
            std::cout << "Invalid input." << std::endl;
            continue;
        }

        num1 = std::stod(input);

        if (cal.proceed(num1)) break;

        std::cout << "Enter the second number: ";
        std::cin >> input;

        if (!cal.is_number(input)) {
            std::cout << "Invalid input." << std::endl;
            continue;
        }

        num2 = std::stod(input);

        if (cal.proceed(num2)) break;

        std::cout << "Enter the operator (+ or -): ";
        std::cin >> op;

        if(!cal.validOp(op)){
            std::cout << "Invalid operation." << std::endl;
            continue;
        }else {

            int result;

            result = cal.calculate(op, num1, num2);
            std::cout << num1 << " " << op << " " << num2 << " " << "=" << " " << result << std::endl;
        }

    } while (true);


    std::cout << "Calculator terminated." << std::endl;
    return 0;
}
