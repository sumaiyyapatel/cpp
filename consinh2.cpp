//Role of constructor in Inheritance:
//Paramaterized Constructor
//Single Inheritance/Hierarchical/multilevel 

#include<iostream>
#include<conio.h>
using namespace std;

class A   // base class
{   int a;
    public:
    A(int a1) // paramaterized constructor i.e. constructor with arguement

    {a=a1;}

    void showA()
    {cout<<"\n a = " <<a;}
};

class B: public A // derived class

{ int b; 
  public:

  B(int b1, int b2): A(b1) // forcefully we r calling base class constructor // and passing value for its argument
  {b=b2;}
  void showB()
  {cout<<"\nb = "<<b;}// derived class
};

main()
{
    B ob(100,200);
    ob.showA();
    ob.showB();
}