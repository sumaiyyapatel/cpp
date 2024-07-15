// Hybrid Inheritance

#include<iostream> 
#include<conio.h>
using namespace std;

class M //base1
{
   public:
    int m; 
    void setm(int x)
    {m=x;}
};

class N //base2
{
   public:
    int n;
    void setn(int y)
    {n=y;} 

};
class R: public P
{
   public:
    void sub()
    {cout<<"Subtraction=" <<m-n;}
};

void main()
{ int p1,q1;
    P p1;

p1.setm(100); 
p1.setn(20);
p1.display();

Q q1;

q1.setm(100);
q1.setn(20);
q1.add();
}