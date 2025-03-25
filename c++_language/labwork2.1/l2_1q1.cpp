#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    int id;
    string name;
    int age;
    string role;
    int salary;
    string city;
    int experience;
    string company_name;

    void dataintake()
    {
        cout << "Enter employee id: ";
        cin >> id;
        cin.ignore(); 

        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter employee role: ";
        getline(cin, role);

        cout << "Enter employee salary: ";
        cin >> salary;
        cin.ignore();

        cout << "Enter city: ";
        getline(cin, city);

        cout << "Enter employee experience (in years): ";
        cin >> experience;
        cin.ignore();

        cout << "Enter employee company name: ";
        getline(cin, company_name);
    }

    void dataoutgoing()
    {
        cout << "---------------------------------" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "City: " << city << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Company Name: " << company_name << endl;
    }
};

int main()
{
    employee emp[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for employee " << i + 1 << "=>" << endl;
        emp[i].dataintake();
    }

    cout << "\n\nDisplaying employee details:\n";
    for (int i = 0; i < 5; i++)
    {
        emp[i].dataoutgoing();
    }
    return 0;
}

