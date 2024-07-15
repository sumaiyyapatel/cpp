#include <iostream>
using namespace std;

int main()
{int a[10],i;

for(int i = 0; i < 10; ++i) {
    cout<<"Enter a number :";
    cin>>a[i];
}
for(int i = 0; i < 10; ++i) {
    cout<<a[i]; 
}
return 0;
}