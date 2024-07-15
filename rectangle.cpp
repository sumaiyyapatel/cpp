// Passing object as an argument
// WAP to create half of the existing object which is passed as an argument

#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{ int height,width; 
  public:
  void setdata(int h, int w)
  { height=h; width=w;} 
  
  void half(Rectangle ob) // ob is an object as an argument 
  {height=ob.height/2; 
  width=ob.width/2;}

  void showdata()
  { cout<<nHeight = " << height"}