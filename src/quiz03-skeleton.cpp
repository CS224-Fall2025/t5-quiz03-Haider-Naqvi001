#include <iostream>
#include <cstring>
using namespace std;
class Employee{
private:
string name;
double salary;
public:
static int employeeCount;

Employee(string n, double s) {
    cout << "Enter name of the Employee is: " << n << endl;
    cin >> n;
    cout << "Enter Salary of the Employee is: " << s << endl;
    cin >> s;
    employeeCount++;
}

virtual void displayInfo(string n, double s) {
    cout << "Name of the Employee is: " << n << endl;
    cout << "Salary of the Employee is: " << s << endl;
}

static void showTotalEmployees() {
    cout << employeeCount << endl;
}

virtual ~Employee();
};

class Faculty : public Employee{
private:
string department;

virtual void displayInfo(string n, double s) {
    cout << "Name of the Employee is: " << n << endl;
    cout << "Salary of the Employee is: " << s << endl;
    cout << "Title of the Employee is: " << "Staff" << endl;
}
};
class Faculty: public Employee{
private:
string department;
public:
virtual void displayInfo(string n, double s) {
    cout << "Name of the Employee is: " << n << endl;
    cout << "Salary of the Employee is: " << s << endl;
    cout << "Title of the Employee is: " << "Faculty" << endl;
}
};



int main() {
    cout << "Enter the total number of employees: " << endl;
    int n;
    cin >> n;
    new int Employee*;
    for(int i = 0; i < n; i++) {
        Employee* n;
        Employee*[i] = n;
        cout << displayInfo(string n, double s);
    }
    delete Employee*;
}