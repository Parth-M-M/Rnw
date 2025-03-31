#include <iostream>
#include <string>
using namespace std;

class User {
public:
    int id;
    string name;
    int age;
    string city;
    long long int mobile_number;
    int sim_validity;
    string sim_company_name;

    void getdata() {
        cout << "|-------------------------------------|" << endl;
        cout << "Enter User ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter City: ";
        getline(cin, city);
        cout << "Enter Mobile Number: ";
        cin >> mobile_number;
        cin.ignore();
        cout << "Enter SIM Validity (in months): ";
        cin >> sim_validity;
        cin.ignore();
        cout << "Enter SIM Company Name: ";
        getline(cin, sim_company_name);
    }

    void givedata() {
        cout << "|-------------------------------------|" << endl;
        cout << "User ID => " << id << endl;
        cout << "Name => " << name << endl;
        cout << "Age => " << age << endl;
        cout << "City => " << city << endl;
        cout << "Mobile Number => " << mobile_number << endl;
        cout << "SIM Validity => " << sim_validity << " months" << endl;
        cout << "SIM Company Name => " << sim_company_name << endl;
        cout << "|-------------------------------------|" << endl;
    }
};

int main() {
    int n;
    cout << "Enter Total Users: ";
    cin >> n;
    User users[n];
    
    for (int i = 0; i < n; i++) {
        users[i].getdata();
    }
    
    for (int i = 0; i < n; i++) {
        users[i].givedata();
    }
    
    return 0;
}

