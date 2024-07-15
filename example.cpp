#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    // Constructor
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    // Normal function
    void bark() {
        cout << name << " is barking!" << endl;
    }

    // Normal function
    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << " years old" << endl;
    }
};

int main() {
    // Creating an object of the Dog class
    Dog myDog("Buddy", 3);

    // Calling normal functions on the object
    myDog.bark();
    myDog.printInfo();

    return 0;
}