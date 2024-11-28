#include <iostream>

int main() {
    float num1, num2, result;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    try {
        if (num2 == 0) {
            throw "Division by zero error";
        }
        result = num1 / num2;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char* msg) {
        std::cout << msg << std::endl;
    }

    return 0;
}