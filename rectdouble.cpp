// Passing object as an argument
// WAP to add two objects by passing two objects as an argument

#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{ int height,width;
  public:

 void setdata(int h, int w)
 { height=h; 
   width=w;}
 
 void add(Rectangle ob1, Rectangle ob2)
 { height=ob1.height+ob2.height; 
   width=ob1.width+ob2.width;} 
 void showdata()
 { cout<<"\nHeight = " << height; 
  cout<<"\nWidth = " << width;}
};

int main()
{ Rectangle R1,R2,R3;
  
R1.setdata(100,200); 
cout<<"\nR1--> \n";
R1.showdata();

R2.setdata(50,50); 
cout<<"\nR2 -->\n"; 
R2.showdata();

cout<<"\nR3->\n"; R3.add(R1,R2);
R3.showdata();
}