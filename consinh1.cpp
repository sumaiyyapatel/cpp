// Role of constructor in Inheritance:
//Default Constructor

//1) Single Inheritance 

#include<iostream.h>
#include<conio.h>

class A
{
    public: 
    A()
    {cout<<"\n I am in A class";}
};
class B :public A
{
    public: 
    B()
     {cout<<"\nl am in B class";}