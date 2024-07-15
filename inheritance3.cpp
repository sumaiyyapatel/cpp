// Hierarchical Inheritance

#include<iostream> 
#include<conio.h>
using namespace std;

class A // Base Class
{
public: int x;
 A()
 {x=100;}
};

class B: public A //B is inheriting from A
{
int y,z; 
public:
B()
{y=20;}

int mul()
{z=x*y;}

void disp_xyz()
{
cout<<"\n\n B Class-->\n";
cout<<"\n x = "<<x;
cout<<"\n y = "<<y; cout<<"\n z = "<<z;}
};

class C:public A // c is inheriting from a
{
  int y,z;
  public:
  C()
  {y=20;}

  int div()
  {z=x/y;}
   
   void disp_xyz()
    {
    cout<<"\n\n B Class-->\n";
    cout<<"\n x = "<<x;
    cout<<"\n y = "<<y;
    cout<<"\n z = "<<z;
    }

};

main()
{ B b1;
  b1.mul();
  b1.disp_xyz();
  
  C c1;
  c1.div();
  c1.disp_xyz();
  }