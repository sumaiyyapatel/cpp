#include<iostream>
using namespace std;

 class Test
{   int x,y;
    public:
    Test(int a, int b=200) // paramaterized constructor where one argument having default value=200
   { x=a;
    y=b;}


void showxy()
{cout<<"\n x="<< x <<"y=" << y;}
};
 main()
{   
    Test T(10,20);

// even if constructor is having two arguments, we are passing only bec. 2nd argument is already having default value-200

T.showxy(); 
//Note: Default arguments must be the rightmost in between arguments, we cant set left in between arguments as default
}