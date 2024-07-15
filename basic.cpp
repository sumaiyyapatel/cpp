/*
// C++ program to demonstrate

// Function Derived Type
 #include <iostream>
 #include <conio.h>
 using namespace std;

// max here is a function derived type
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
 
// main is the default function derived type
int main()
{
    int a = 10, b = 20;
     // Calling above function to
    // find max of 'a' and 'b'
    int m = max(a, b);
     cout << "m is " << m;
    return 0;
} 
*/
/*
// Array Derived Type
 #include <iostream>
 #include <conio.h>
 using namespace std;
int main()
{
     // Array Derived Type
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
 
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
     arr[3] = arr[0];
     cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3];
    return 0;
}
*/
/*
// Pointers Derived Type
#include <iostream>
#include <conio.h>
using namespace std;

void geeks()
{
    int var = 20;
 
    // Pointers Derived Type
    // declare pointer variable
    int* ptr;
 
    // note that data type of ptr
    // and var must be same
    ptr = &var;
 
    // assign the address of a variable
    // to a pointer
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";
}
 
// Driver program
int main() { geeks(); }
*/
/*
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int day = 4;

switch (day){
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
return 0;
}
*/
// Create a structure variable called myStructure
/*
#include <iostream>
#include <string>
using namespace std;

struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
int main()
{
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
};
*//*
//Use one structure to represent two cars:
// Declare a structure named "car"
#include <iostream>
#include <string>
using namespace std;

struct car {
  string brand;
  string model;
  int year;
};


int main() {
 // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  //Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  //Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
*/
