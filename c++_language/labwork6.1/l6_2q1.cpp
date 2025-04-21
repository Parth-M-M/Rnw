#include <iostream>
#include <string>
using namespace std;

class Admin 
{
private:
    string company_name;
    double total_annual_revenue;
    bool can_terminate;

protected:
    double manager_salary;
    double employee_salary;
    int total_staff;

public:
    Admin() 
    {
        company_name = "TechNova Inc.";
        total_annual_revenue = 10000000.00;
        can_terminate = true;
        manager_salary = 120000;
        employee_salary = 60000;
        total_staff = 250;
    }

    virtual void myAccess() 
    {
        cout << "\n--- Admin Class ---" << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Total Annual Revenue: $" << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
        cout << "Manager Salary: $" << manager_salary << endl;
        cout << "Employee Salary: $" << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};

class Manager : public Admin 
{
public:
    void myAccess() override 
    {
        cout << "\n--- Manager Class ---" << endl;
        cout << "Manager Salary: $" << manager_salary << endl;
        cout << "Employee Salary: $" << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};

class Employee : public Manager 
{
public:
    void myAccess() override 
    {
        cout << "\n--- Employee Class ---" << endl;
        cout << "Employee Salary: $" << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
    }
};

int main() 
{
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}
