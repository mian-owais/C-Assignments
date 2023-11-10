#include <iostream>
using namespace std;

int main() {
    char oper;
    int num1, num2;
    double result;
    cout << "Enter two numbers: ";
    cin >> num1;
    cin>> num2;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> oper;
    switch (oper) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 %  num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Modulo by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Enter the right operator (+, -, *, /, %)." << endl;
    }

    return 0;
}
