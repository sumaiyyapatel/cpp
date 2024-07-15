#include <iostream>
#include <math.h>
using namespace std;
class Calculator
{
    float A, B;

public:
    void get()
    {
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    float add()
    {
        return A + B;
    }
    float sub()
    {
        return A - B;
    }
    float mul()
    {
        return A * B;
    }
    float div()
    {
        {
            return A / B;
        }
    }
};
int main()
{
    char choice;
    Calculator cal; // simple calculator object
    cout << "\n enter'+' for addition"
         << "\n enter'-' for subtraction"
         << "\n enter'*' for multiplication"
         << "\n enter'/' for division";

    cout << "\nEnter Choice: ";
    cin >> choice;

    if (choice = '+')
    {
        cal.get();
        cout << "Result: " << cal.add() << endl;
    }
    else if (choice= '-')
    {
        cal.get();
        cout << "Result: " << cal.sub() << endl;
    }
    else if (choice = '*')
    {
        cal.get();
        cout << "Result: " << cal.mul() << endl;
    }
    else if(choice = '/')
    {
        cal.get();
        cout << "Result: " << cal.div() << endl;
    }
    else 
    { cout<< "invalid input";}

return 0;
}