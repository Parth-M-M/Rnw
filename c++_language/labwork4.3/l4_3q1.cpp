#include <iostream>
#include <string>
using namespace std;

class Employee 
{
protected:
    int employee_id;
    string name;
    int age;
    double salary;

public:
    Employee(int id = 0, string n = "", int a = 0, double s = 0.0): employee_id(id), name(n), age(a), salary(s) 
		{
			
		}

    virtual ~Employee() 
	{ 
	
	}

    virtual void display() 
	{
        cout << "ID: " << employee_id << ", Name: " << name
             << ", Age: " << age << ", Salary: " << salary;
    }

    virtual int getID() 
	{
        return employee_id;
    }
};

class FullTimeEmployee : public Employee 
{
private:
    double bonus;

public:
    FullTimeEmployee(int id, string n, int a, double s, double b): Employee(id, n, a, s), bonus(b) 
		{ 
		
		}

    void display() override 
	{
        Employee::display();
        cout << ", Bonus: " << bonus << " [Full-Time]" << endl;
    }
};

class PartTimeEmployee : public Employee 
{
private:
    int hours_worked;

public:
    PartTimeEmployee(int id, string n, int a, double s, int h): Employee(id, n, a, s), hours_worked(h) 
	{ 
	
	}

    void display() override 
	{
        Employee::display();
        cout << ", Hours Worked: " << hours_worked << " [Part-Time]" << endl;
    }
};

const int MAX_EMPLOYEES = 100;
Employee* employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee();
void displayAll();
void deleteEmployee();
void freeMemory();

int main() 
{
    int choice;

    do {
        cout << "\n=== Employee Management System ===" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Delete Employee" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) 
		{
        case 1:
            addEmployee();
            break;
        case 2:
            displayAll();
            break;
        case 3:
            deleteEmployee();
            break;
        case 4:
            freeMemory();
            cout << "Exiting. All memory freed." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}


void addEmployee() {
    int type;
    cout << "Enter Employee Type (1 - Full Time, 2 - Part Time): ";
    cin >> type;

    int id, age;
    string name;
    double salary;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Salary: ";
    cin >> salary;

    if (type == 1) 
	{
        double bonus;
        cout << "Enter Bonus: ";
        cin >> bonus;
        employees[employeeCount++] = new FullTimeEmployee(id, name, age, salary, bonus);
    }
	else if (type == 2) 
	{
        int hours;
        cout << "Enter Hours Worked: ";
        cin >> hours;
        employees[employeeCount++] = new PartTimeEmployee(id, name, age, salary, hours);
    }
	else 
	{
        cout << "Invalid type!" << endl;
    }
}

void displayAll() 
{
    if (employeeCount == 0) 
	{
        cout << "No employees to display." << endl;
        return;
    }

    for (int i = 0; i < employeeCount; ++i) 
	{
        employees[i]->display();
    }
}

void deleteEmployee() 
{
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;

    for (int i = 0; i < employeeCount; ++i) 
	{
        if (employees[i]->getID() == id) 
		{
            delete employees[i];
            for (int j = i; j < employeeCount - 1; ++j) 
			{
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            cout << "Employee deleted successfully." << endl;
            return;
        }
    }

    cout << "Employee with ID " << id << " not found." << endl;
}

void freeMemory() 
{
	
    for (int i = 0; i < employeeCount; ++i) 
	{
        delete employees[i];
    }
    employeeCount = 0;
}

