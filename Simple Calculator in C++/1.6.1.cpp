#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main() {
    float num1, num2, result; 
    char op;

    cout << "Enter first operand: ";
    cin >> num1;

    cout << "Enter second operand: ";
    cin >> num2;
    
     cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " ;
            break;

        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " ;
            break;

        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = ";
            break;

        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero.";
                return 1;
            }
            cout << num1 << " / " << num2 << " = ";
            break;

        default:
            cout << "Error! Operator is not correct.";
            break;
    }
if (result != -DBL_MAX)
    cout << num1 << op << num2 << " = " << result;
    return 0;
}
