#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number (if not needed, enter 0): ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /, P, r): ";
    cin >> op;

    if (op == '+') {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
    }
    else if (op == '-') {
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
    }
    else if (op == '*') {
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
        } else {
            cout << "Error! Division by zero.";
            return 1;
        }
    }
    else if (op == 'P') {
        result = pow(num1, num2);
        cout << num1 << " ^ " << num2 << " = " << result;
    }
    else if (op == 'r') {
        if (num1 >= 0) {
            result = sqrt(num1);
            cout << "√" << num1 << " = " << result;
        } else {
            cout << "Error! Cannot take square root of a negative number.";
        }
    }
    else {
        cout << "Error! Operator is not correct.";
    }

    return 0;
}