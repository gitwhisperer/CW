#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by zero!" << endl;
            return 0;
        }
    }

private:
    T num1, num2;
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "Int Add: " << intCalc.add() << endl;
    cout << "Int Subtract: " << intCalc.subtract() << endl;
    cout << "Int Multiply: " << intCalc.multiply() << endl;
    cout << "Int Divide: " << intCalc.divide() << endl;

    Calculator<double> doubleCalc(10.5, 5.5);
    cout << "Double Add: " << doubleCalc.add() << endl;
    cout << "Double Subtract: " << doubleCalc.subtract() << endl;
    cout << "Double Multiply: " << doubleCalc.multiply() << endl;
    cout << "Double Divide: " << doubleCalc.divide() << endl;

    return 0;
}