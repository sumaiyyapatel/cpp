#include<iostream>
#include<iomanip>
#include<string.h> 
using namespace std;

class Employee {
    int empID;
    char name[30];
    float basicSalary, hra, da, grossSalary, tax, netSalary;

public:
    void getdata();
    void calculateAllowances();
    void calculateDeductions();
    void calculateNetSalary();
    void showdata();
};

void Employee::getdata() {
    cout << "Enter Employee ID: ";
    cin >> empID;
    cout << "Enter Employee Name: ";
    cin.ignore(); // to clear the newline character from the buffer
    cin.getline(name, 30);
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
}

void Employee::calculateAllowances() {
    hra = 0.20 * basicSalary; // Assuming HRA is 20% of basic salary
    da = 0.10 * basicSalary;  // Assuming DA is 10% of basic salary
    grossSalary = basicSalary + hra + da;
}

void Employee::calculateDeductions() {
    tax = 0.10 * grossSalary; // Assuming tax is 10% of gross salary
}

void Employee::calculateNetSalary() {
    netSalary = grossSalary - tax;
}

void Employee::showdata() {
    cout << endl << setw(8) << empID << setw(20) << name << setw(12) << basicSalary << setw(12) << hra << setw(12) << da << setw(14) << grossSalary << setw(8) << tax << setw(14) << netSalary;
}

int main() {
    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    Employee* E = new Employee[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        E[i].getdata();
        E[i].calculateAllowances();
        E[i].calculateDeductions();
        E[i].calculateNetSalary();
    }

    cout << "\n\t\t\t SALARY DETAILS\n"; 
    cout << "\t\t\t================\n";
    cout << setw(8) << "Emp ID" << setw(20) << "Name" << setw(12) << "Basic Salary" << setw(12) << "HRA" << setw(12) << "DA" << setw(14) << "Gross Salary" << setw(8) << "Tax" << setw(14) << "Net Salary" << endl;

    for (int i = 0; i < numEmployees; i++) {
        E[i].showdata();
    }

    delete[] E;

    return 0;
}
