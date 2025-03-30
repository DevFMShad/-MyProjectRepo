// Version 3: Class-Based Calculator
#include <iostream>
using namespace std;

class Calculator {
public:
    double num1, num2;
    char op;
    void getInput() {
        cout << "Enter first number, operator (+, -, *, /) and second number: ";
        cin >> num1 >> op >> num2;
    }
    void compute() {
        switch (op) {
            case '+': cout << "Result: " << num1 + num2; break;
            case '-': cout << "Result: " << num1 - num2; break;
            case '*': cout << "Result: " << num1 * num2; break;
            case '/':
                if (num2 != 0) cout << "Result: " << num1 / num2;
                else cout << "Error: Division by zero";
                break;
            default: cout << "Invalid operator";
        }
    }
};

int main() {
    Calculator calc;
    calc.getInput();
    calc.compute();
    return 0;
}