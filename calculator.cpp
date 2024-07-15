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

class Scientific
{
    float a;

public:
    void get()
    {
        cout << "Enter Number: ";
        cin >> a;
    }

    float square()
    {
        return a * a;
    }

    float cube()
    {
        return a * a * a;
    }

    float squareroot()
    {
        return sqrt(a);
    }

    float cuberoot()
    {
        return cbrt(a);
    }
};
int main()
{
    Calculator cal;
    Scientific scal;
    /*cal.get();
    cout << "Result: " << cal.add() << endl;
    cout << "Result: " << cal.sub() << endl;
    cout << "Result: " << cal.mul() << endl;
    cout << "Result: " << cal.div() << endl;*/
    scal.get();
    cout << "Result: " << scal.square() << endl;
    cout << "Result: " << scal.cube() << endl;
    cout << "Result: " << scal.squareroot() << endl;
    cout << "Result: " << scal.cuberoot() << endl;

    return 0;
}