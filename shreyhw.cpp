#include <iostream>
#include<cmath>

using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class SimpleCalculator
{
    int num1, num2;
public:
    void get_numbers(int, int);
    int addition(int, int);
    int substraction(int, int);
    int multiplication(int, int);
    int division(int, int);

    void display_Simp_Cal();
};

void SimpleCalculator ::get_numbers(int a, int b)
{
    num1 = a;
    num2 = b;
}

int SimpleCalculator ::addition(int a, int b)
{
    cout << endl
         << "Addition = ";
    return a + b;
}

int SimpleCalculator ::substraction(int a, int b)
{
    cout << endl
         << "Substraction = ";
    return a - b;
}

int SimpleCalculator ::multiplication(int a, int b)
{
    cout << endl
         << "Multiplication = ";
    return a * b;
}

int SimpleCalculator ::division(int a, int b)
{
    cout << endl
         << "Division = ";
    return a / b;
}

void SimpleCalculator ::display_Simp_Cal()
{
    cout << addition(num1, num2);
    cout << substraction(num1, num2);
    cout << multiplication(num1, num2);
    cout << division(num1, num2);
}

class ScientificCalculator
{
    public:
        float num3;
        void get_num(float);
        float sin_x(float);
        float cos_x(float);
        float tan_x(float);
        float sqrt_x(float);

        void display_Sci_Cal();
};

void ScientificCalculator::get_num(float x)
{
    num3 = x;
}

float ScientificCalculator::sin_x(float x)
{
    return sin(x);
}

float ScientificCalculator::cos_x(float x)
{
    return cos(x);
}

float ScientificCalculator::tan_x(float x)
{
    return tan(x);
}

float ScientificCalculator::sqrt_x(float x)
{
    return sqrt(x);
}

void ScientificCalculator::display_Sci_Cal()
{
    cout<<sin_x(num3)<<endl;
    cout<<cos_x(num3)<<endl;
    cout<<tan_x(num3)<<endl;
    cout<<sqrt_x(num3)<<endl;
}

int main()
{
    int a, b;
    cout <<"Enter numbers to perform simple calculation - " << endl;
    cout << "Number 1:";
    cin >> a;
    cout << "Number 2:";
    cin >> b;

    SimpleCalculator SiCal;
    SiCal.get_numbers(a, b);
    SiCal.display_Simp_Cal();

    float x;
    cout<< endl<<"Enter a number to perform scientific calculation- ";
    cin>>x;
    
    ScientificCalculator SciCal;
    SciCal.get_num(x);
    SciCal.display_Sci_Cal();
    
    return 0;

}
