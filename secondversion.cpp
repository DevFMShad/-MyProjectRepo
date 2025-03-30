// Version 2: Function-Based Calculator
#include <iostream>
using namespace std;

double calculate(double num1, char op, double num2) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return (num2 != 0) ? num1 / num2 : throw invalid_argument("Division by zero");
        default: throw invalid_argument("Invalid operator");
    }
}

int main() {
    double num1, num2;
    char op;
    cout << "Enter first number, operator (+, -, *, /) and second number: ";
    cin >> num1 >> op >> num2;
    try {
        cout << "Result: " << calculate(num1, op, num2);
    } catch (const exception &e) {
        cout << "Error: " << e.what();
    }
    return 0;
}