#include<iostream>
#include <string.h>
using namespace std;


class person
{ char* name; 
 int age;

public:
person(){}
person(char* n,int a)

{
    strcpy(name,n);
    age=a;
}

person larger (person ob)
{
if (ob.age>age)
    return ob;
else 
    return *this;
}
 void showdata()
 { cout<< "\n Name"<< name;
   cout<<"\n Age="<<age;}
};

main()
{

person p1("Pankaj",20), p2("Saurabh",21), p3("Nitin",30),p4;

p4=p1.larger(p2); // p2 object which is passed as an argument is II larger 
cout<<"\nLarger: "; 
p4.showdata();
p4=p3.larger(p2); // p3 object, through which we call the // function is larger i.e, current object 
cout<<"\nLarger: "; 
p4.showdata();

}