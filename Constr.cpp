#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int Eid;
    string name;
    double salary;

public:
    Employee() : Eid(0), name(""), salary(0.0) {}

    void getc() {
        cout << "Enter Employee ID: ";
        cin >> Eid;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
    }

    void display() const {
        cout << "Employee ID: " << Eid << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual void calculateSalary() = 0;
};

class FullTime : public Employee {
private:
    double wages;
    int noDays;

public:
    FullTime() : Employee(), wages(0.0), noDays(0) {}

    void getf() {
        getc();
        cout << "Enter Wages: ";
        cin >> wages;
        cout << "Enter Number of Days: ";
        cin >> noDays;
    }

    void calculateSalary() override {
        salary = wages * noDays;
    }

    void putf() const {
        display();
        cout << "Total Wages: " << wages << endl;
        cout << "Number of Days: " << noDays << endl;
    }
};

class PartTime : public Employee {
private:
    int noHours;
    double hourlyWages;

public:
    PartTime() : Employee(), noHours(0), hourlyWages(0.0) {}

    void getp() {
        getc();
        cout << "Enter Number of Hours: ";
        cin >> noHours;
        cout << "Enter Hourly Wages: ";
        cin >> hourlyWages;
    }

    void calculateSalary() override {
        salary = noHours * hourlyWages;
    }

    void putp() const {
        display();
        cout << "Number of Hours: " << noHours << endl;
        cout << "Hourly Wages: " << hourlyWages << endl;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee* employees[MAX_EMPLOYEES];
    char empTypes[MAX_EMPLOYEES];
    int n;
    char empType;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter employee type (f for FullTime, p for PartTime): ";
        cin >> empType;
        empTypes[i] = empType;

        if (empType == 'f') {
            FullTime* ft = new FullTime();
            ft->getf();
            employees[i] = ft;
        } else if (empType == 'p') {
            PartTime* pt = new PartTime();
            pt->getp();
            employees[i] = pt;
        } else {
            cout << "Invalid employee type. Please enter 'f' or 'p'." << endl;
            --i; // retry current iteration
        }
    }

    cout << "\nEmployee Details and Salary Calculation:\n";
    for (int i = 0; i < n; ++i) {
        employees[i]->calculateSalary();
        if (empTypes[i] == 'f') {
            static_cast<FullTime*>(employees[i])->putf();
        } else if (empTypes[i] == 'p') {
            static_cast<PartTime*>(employees[i])->putp();
        }
        cout << endl;
    }


    return 0;
}
