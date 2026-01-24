#include <iostream>
using namespace std;

// Function using references
void calculate(int &x, int &y, char op) {
    switch(op) {
        case '+': cout << "Result = " << x + y; break;
        case '-': cout << "Result = " << x - y; break;
        case '*': cout << "Result = " << x * y; break;
        case '/': 
            if(y != 0) cout << "Result = " << x / y;
            else cout << "Error: Division by zero!";
            break;
        case '%': 
            if(y != 0) cout << "Result = " << x % y;
            else cout << "Error: Modulo by zero!";
            break;
        case '&': cout << "Bitwise AND = " << (x & y); break;
        case '|': cout << "Bitwise OR = " << (x | y); break;
        case '^': cout << "Bitwise XOR = " << (x ^ y); break;
        case '<': cout << "Left Shift = " << (x << y); break;
        case '>': cout << "Right Shift = " << (x >> y); break;
        default: cout << "Invalid operator!";
    }
}

int main() {
    int a, b;
    char op;

    cout << "Enter your first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /, %, &, |, ^, < for <<, > for >>): ";
    cin >> op;

    cout << "Enter your second number: ";
    cin >> b;

    // Using pointers
    int* ptrA = new int(a);
    int* ptrB = new int(b);

    // Using references
    int &refA = *ptrA;
    int &refB = *ptrB;

    calculate(refA, refB, op);

    // Free memory
    delete ptrA;
    delete ptrB;

    return 0;
}
