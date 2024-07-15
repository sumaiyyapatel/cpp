#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Ask the user for the number to check
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Find the number of digits in the number
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Check if the number is an Armstrong number
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    if ((int)result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}