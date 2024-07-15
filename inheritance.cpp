//Inheritance reusability


#include<iostream>
#include<conio.h>
using namespace std;

class A
{
int a;
public:
void seta(int x)
{a=x;}

void showa()
{cout<<"\n a = "<<a;}

//Base Class is never inherited

};

class B: public A
{};
//B is inherating Base Class A publicly i.e Derived Class
int main()
{B b1;
b1.seta(100); 
b1.showa();}