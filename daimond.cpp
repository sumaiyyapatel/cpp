#include <iostream>
using namespace std;

class base
{
public:
    int x;
};

class class1 : virtual public base
{
public:
    int y;
};

class class2 : virtual public base
{
public:
    int z;
};

class derived : public class1, public class2
{
public:
    int sum;
};

int main()
{
    derived o1;
    o1.class1::x = 5;
    o1.y = 10;
    o1.z = 15;
    o1.sum = o1.class1::x + o1.y + o1.z;
    cout << "sum = " << o1.sum << endl;
    return 0;
}