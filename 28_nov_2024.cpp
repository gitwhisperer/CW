#include <iostream>

int main() {
    float a, b, result;
    
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;

    try {
        if (b == 0 || a == 0) {
            throw "Division by zero error";
        }
        result = a / b;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char* msg) {
        std::cout << msg << std::endl;
    }

    return 0;
}