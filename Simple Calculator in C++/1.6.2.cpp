#include <bits/stdc++.h>
#include <cfloat>
using namespace std;

int main() {
    float num1, num2, result;
    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Read the two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+')
        result = num1 + num2;
    else if (op == '-')
        result = num1 - num2;
    else if (op == '*')
        result = num1 * num2;
    else if (op == '/')
        result = num1 / num2;
    else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }

    if (result != -DBL_MAX)
        cout << "Result: " << result;

    return 0;
}