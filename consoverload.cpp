//Copy Constructor, Multiple Constructor in a class,
// Constructor overloading
/*
#include<iostream> 
#include<conio.h>
using namespace std;

class Rectangle
{
int height,width;
public:
Rectangle()
{height=0; width=0;}
// default constructor

Rectangle(int h, int w)  // paramaterized constructor
{height=h; width=w;}

Rectangle(Rectangle &ob)  // copy constructor i.e. passing object as an argument
{
height=ob.height;
width=ob.width;// Object Initialization
}
void showdata()
{cout<<"\nHeight = " << height; cout<<"\nWidth = " << width;}
};
int main()
{
Rectangle R1;  // default constructor

Rectangle R2(100,200); // paramaterized constructor
Rectangle R3(R2);

R1.showdata();
R2.showdata();
R3.showdata();
}

*/
#include <iostream>

class Rectangle {
private:
    int height_;
    int width_;

public:
    Rectangle() : height_(0), width_(0) {} // default constructor

    Rectangle(int height, int width) : height_(height), width_(width) {} // parameterized constructor

    Rectangle(const Rectangle& other) : height_(other.height_), width_(other.width_) {} // copy constructor

    void showData() const {
        std::cout << "\nHeight = " << height_ << std::endl;
        std::cout << "Width = " << width_ << std::endl;
    }
};

int main() {
    Rectangle r1; // default constructor
    Rectangle r2(100, 200); // parameterized constructor
    Rectangle r3(r2); // copy constructor

    r1.showData();
    r2.showData();
    r3.showData();

    return 0;
}
class Rectangle {
private:
    int height_;
    int width_;

public:
    // Inline default constructor
    inline Rectangle() : height_(0), width_(0) {}

    // Inline parameterized constructor
    inline Rectangle(int height, int width) : height_(height), width_(width) {}

    // Inline copy constructor
    inline Rectangle(const Rectangle& other) : height_(other.height_), width_(other.width_) {}

    void showData() const {
        std::cout << "\nHeight = " << height_ << std::endl;
        std::cout << "Width = " << width_ << std::endl;
    }
};