#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}


    void getComplex() {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imag;
    }


    void display() const {
        std::cout << real << (imag >= 0 ? "+" : "") << imag << "i" << std::endl;
    }

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(const Complex& c) const {
        return Complex((real * c.real - imag * c.imag),
                      (real * c.imag + imag * c.real));
    }

    Complex operator/(const Complex& c) const {
        double denominator = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / denominator,
                      (imag * c.real - real * c.imag) / denominator);
    }
};

int main() {
    Complex c1, c2, result;
    
    std::cout << "Enter first complex number:\n";
    c1.getComplex();
    
    std::cout << "Enter second complex number:\n";
    c2.getComplex();

    result = c1 + c2;
    std::cout << "\nAddition: ";
    result.display();

    result = c1 - c2;
    std::cout << "Subtraction: ";
    result.display();

    result = c1 * c2;
    std::cout << "Multiplication: ";
    result.display();

    result = c1 / c2;
    std::cout << "Division: ";
    result.display();

    return 0;
}