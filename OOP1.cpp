//Demonstrate Function Overloading
// We may have any no. of functions with same name but with different argument list, then it is called as function overloading

#include<iostream>
using namespace std;

int add(int,int);
int add(int,int,int);
int add(int,int,int,int);
double add(double,double);
 
 
int main()
{
// int x=add(10,20,30);
// cout<<"\nAddition = "<<x;

cout<<"\n Addition = "<<add(10,20,30);
cout<<"\n Addition = "<<add (10,20);
cout<<"\n Addition = "<<add(5.6,10.2); 
cout<<"\n Addition = "<<add(10,20,30,40);
}

int add(int a,int b)
 { return a+b;}

int add(int a,int b,int c)
 { return a+b+c;}

int add(int a,int b,int c, int d)
 { return a+b+c+d;}

 double add( double a, double b)
 {return a+b;}