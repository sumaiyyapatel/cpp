#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h> 
using namespace std;

class Marksheet {
    int rollno;
public:
    int p1, p2, p3, total;
    float per;
    char name[10], res[10], div[10];

    void getdata(void);
    void totalmarks(void);
    void percentage(void);
    void result(void);
    void division(void);
    void showdata(void);
};

void Marksheet::getdata() {
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks for subject 1: ";
    cin >> p1;
    cout << "Enter marks for subject 2: ";
    cin >> p2;
    cout << "Enter marks for subject 3: ";
    cin >> p3;
}

void Marksheet::totalmarks() {
    total = p1 + p2 + p3;
}

void Marksheet::percentage() {
    per = 1.0 * total / 3;
}

void Marksheet::result() {
    if (p1 >= 35 && p2 >= 35 && p3 >= 35) 
        strcpy(res, "Pass");
    else
        strcpy(res, "Fail");
}

void Marksheet::division() {
    if (per >= 75)
        strcpy(div, "Dist");
    else if (per >= 60)
        strcpy(div, "First");
    else if (per >= 50)
        strcpy(div, "Second");
    else if (per >= 35)
        strcpy(div, "Third");
    else
        strcpy(div, "******");
}

void Marksheet::showdata() {
    cout << endl << setw(8) << rollno << setw(12) << name << setw(5) << p1 << setw(5) << p2 << setw(5) << p3 << setw(7) << total << setw(10) << setprecision(4) << per << setw(8) << res << setw(10) << div;
}

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Marksheet* M = new Marksheet[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        M[i].getdata();
        M[i].totalmarks();
        M[i].percentage();
        M[i].result();
        M[i].division();
    }

    cout << "\n\t\t\t MARKSHEET\n"; 
    cout << "\t\t\t============\n";
    cout << setw(8) << "Rollno" << setw(12) << "Name" << setw(5) << "P1" << setw(5) << "P2" << setw(5) << "P3" << setw(7) << "TOTAL" << setw(10) << "PER" << setw(8) << "RESULT" << setw(10) << "DIVISION" << endl;

    for (int i = 0; i < numStudents; i++) {
        M[i].showdata();
    }

    delete[] M;

    return 0;
}
