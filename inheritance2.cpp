// Single Inheritance (for exam)
#include <iostream>
using namespace std;
class Room
{
public:
int length, breadth;

void setLB(int I, int b)
{length=1; breadth=b;}

int area()
{return(length*breadth);}

};

class BedRoom: public Room
{
public:
int height;
void setH(int h)
{height=h;}

int volume()
{ return(length*breadth*height);}
};
int main()
{ BedRoom R;

R.setLB(10,20);
R.setH(30); // method of BaseClass 

cout<<"Area = " << R.area(); // method of BaseClass 
cout<<"Volume = " << R.volume(); // method of Derivedclass

}