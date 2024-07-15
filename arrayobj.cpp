#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
int rollno,marks; 
char name [10];
public:
    void getdata()
 {  cout<< "enter roll number ,name and marks";
    cin>>rollno>>name>>marks;}
    void showdata()
 {cout<<"\t"<<rollno<<"\t"<<name<<"\t"<<marks;}
};

int main()
{
Student S[10];

for(int i=0;i<10;i++)
{ S[i].getdata();}

cout<<"\n\tStudents Information\n";
cout<<"\t============\n"; 
cout<<"\tRollnoltName\tMarks\n";

for(int i=0;i<10;i++)
{
  S[i].showdata();
}
}