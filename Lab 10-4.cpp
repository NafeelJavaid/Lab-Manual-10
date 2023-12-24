#include <iostream>
#include <cmath>
using namespace std;
struct Employee {
    std::string name;
    double salary;
    int hours_worked;
};
void increaseSalary(Employee& employee, int hours_worked) {
    if (hours_worked <= 8) {
        employee.salary += 50;
    } else if (hours_worked <= 10) {
        employee.salary += 100;
    } else {
        employee.salary += 150;
    }
}
int main() {
    Employee employees[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter employee " << i + 1 << " name: ";
        cin >> employees[i].name;
        cout << "Enter employee " << i + 1 << " salary: ";
        cin >> employees[i].salary;
        cout << "Enter employee " << i + 1 << " hours worked per day: ";
        cin >> employees[i].hours_worked;
    }
       cout <<endl;
     for (int i = 0; i < 10; i++) {
        increaseSalary(employees[i], employees[i].hours_worked);
        cout << "Name: " << employees[i].name << ", New Salary: $" << employees[i].salary <<endl;
    }
     return 0;
}