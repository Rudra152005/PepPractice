#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /, &, |, <, >, ^): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero not allowed";
            break;

        case '&':
            cout << "Bitwise AND = " << (a & b);
            break;

        case '|':
            cout << "Bitwise OR = " << (a | b);
            break;

        case '<':   
            cout << "Left Shift = " << (a << b);
            break;

        case '>':   
            cout << "Right Shift = " << (a >> b);
            break;
        case '^':
            cout << "Xor operat = " << (a ^ b);

        default:
            cout << "Invalid operator!";
    }

    return 0;
}

