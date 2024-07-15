// C** program to overload the binary operator *
// This program adds two product numbers

#include <iostream>
using namespace std;

class product {
   private:
   int num1;
   int num2;

   public:
    // Constructor to initialize num1 and num2 to 0
    product() : num1(0), num2(0) {}

    void input() {
        cout << "Enter number 1 and number 2 respectively: ";
        cin >> num1;
        cin >> num2;
    }

    // Overload the * operator
    product operator * (const product& obj) {
        product temp;
        temp.num1 = num1 * obj.num1;
        temp.num2 = num2 * obj.num2;
        return temp;
    }

    void output() {
        if (num2 < 0)
            cout << "Output product numbers: " << num1 << num2 << endl;
        else
            cout << "Output product numbers: " << num1 << "," << num2 << endl;
    }
};

int main() {
    product product1, product2, result;

    cout << "Enter first product numbers:\n";
    product1.input();

    cout << "Enter second product numbers:\n";
    product2.input();

   // product1 calls the operator function
   // product2 is passed as an argument to the function
    result = product1 * product2;
    result.output();

    return 0;
}