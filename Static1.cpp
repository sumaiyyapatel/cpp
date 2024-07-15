#include <iostream>

using namespace std;

class item
{
    static int count;
    int a;

public:
    void setdata(int n)
    {
        a = n;
        count++;
    }

    void showcount()
    {
        cout << "\ncount = " << count;
    }
    void showa()
    {
        cout << "\n a =" << a;
    }
};

int item::count;

int main()
{
    item ob1, ob2, ob3;

    ob1.showcount();
    ob2.showcount();
    ob3.showcount();

    ob1.setdata(100);
    ob2.setdata(200);
    ob3.setdata(300);

    cout << "\nAfter setting data\n";

    ob1.showcount();
    ob2.showcount();
    ob3.showcount();

    ob1.showa();
    ob2.showa();
    ob3.showa();

    return 0;
}