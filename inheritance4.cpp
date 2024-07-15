// multiple Inheritance

#include<iostream> 
#include<conio.h>
using namespace std;
class M//base1
    {public:
    int m; 
void setm(int x) 
    {m=x;}
    };

class N //base2
    {public:
        int n; 
    void setn(int y)
        {n=y;}
    };
    // P is inherating from two base classes M and Nie. Multiple Inheritance

class P:public M, public N
    {public:

    void display()
        {cout<<"\nm="<<m;
        cout<<"\nn="<<n;
        cout<<"\nm*n="<<m*n;}
    // aquiring the properties of both base classes and creating new thing
    };
int main()
{
    P p1;
        p1.setm(100);   //method of M class
        p1.setn(20);    // method of N class
        p1.display();   // method of P class

}