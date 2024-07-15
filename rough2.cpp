
#include <iostream>
#include<sstream>  
using namespace std;

main(){
float a,b,n,d,h;
cout<<"\nEnter no. of slices in a box:";
cin>>a;
cout<<"\nEnter no. of slices needed for survival:";
cin>>n;
cout<<"\nEnter no. of days until governments help:";
cin>>b;
 d=a/n;
 h=b-d;

cout<<"jack need help "<<h<<" times";
}