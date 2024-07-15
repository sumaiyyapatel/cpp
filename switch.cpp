#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char op;
    float a, b;

    cout << "Enter operator: +, -, *, /: ";
    cin >> op;

    cout << "Enter two Numbers: ";
    cin >> a >> b;

    switch (op)
    {

    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;

    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}
