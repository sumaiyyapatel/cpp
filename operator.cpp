// C++ program to show unary operator overloading
#include <iostream>

using namespace std;

class Distance {
public:

	// Member Object
	int meters, centimeters;

	// Constructor to initialize the object's value
	Distance(int m, int c)
	{
		meters = m;
		centimeters = c;
	}

	// Overloading(+) operator to perform decrement
	// operation of Distance object
	void operator+()
	{
		meters++;
		centimeters++;
		cout << "\nmeters & centimeters(Decrement): " << meters << "." << centimeters;
	}
};

// Driver Code
int main()
{
	// Declare and Initialize the constructor
	Distance d1(8, 9);

	// Use (+) unary operator by single operand
	+d1;
	return 0;
}
