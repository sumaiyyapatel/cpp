
#include <iostream>
#include <sstream>
using namespace std;

main()
{
    int a, n, b, daysPassed = 1, sliceAvai = 0, weekDay = 1, sliceNeeded;
    cout << "Enter no. of slices in a box:";
    cin >> a;
    cout << "\nEnter no. of slices needed per day:";
    cin >> n;
    cout << "\nEnter no. of days until governments help:";
    cin >> b;

    sliceNeeded = b / n;

    while (daysPassed != b)
    {
        daysPassed += 1;
        if (sliceNeeded <= sliceAvai)
        {
            cout << "\nNo. of days he needs help: " << daysPassed;
            break;
        }

        if (weekDay % 7 == 0)
        {
            continue;
        }
        else
        {
            sliceAvai = sliceAvai + a;
        }

        sliceAvai = sliceAvai - n;
    }
}
