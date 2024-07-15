// Multilevel Inheritance: inheriting a class from an another derived class

#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
protected:
int rollno;

public:
void setroll(int r)
{rollno=r;}

void showroll()
{cout<<"Rollno = "<<rollno;}
};
class Test: public Student
{protected:
    int p1,p2;

public:
    void setmarksf(int m1 ,int m2)
        {p1=m1;
        p2=m2;}
    void showmarks()
        {cout<<"\np1 = "<<p1; 
        cout<<"\np2 = "<<p2;}
};

class Result:public Test
{float total;

public:
void caltotal()
{ total=p1+p2;}

void showtotal()
{cout<<"\nTotal = "<<total;}
};

int main()
{Result R;

R.setroll(111);
R.setmarksf(56,60);
R.caltotal();

R.showroll();
R.showmarks();
R.showtotal();

}