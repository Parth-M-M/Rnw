#include <iostream>
#include<string>
using namespace std;

class Company {
private:
    int id;
    string name;
    int staff_quantity;
    long revenue;
    int imported_raw_diamonds;
    int exported_diamond;
    string ceo;

public:
    Company() 
    {
        
    }

    Company(int id, string name, int staff_quantity, long revenue, int imported_raw_diamonds, int exported_diamond, string ceo) 
    {
        this->id = id;
        this->name = name;
        this->staff_quantity = staff_quantity;
        this->revenue = revenue;
        this->imported_raw_diamonds = imported_raw_diamonds;
        this->exported_diamond = exported_diamond;
        this->ceo = ceo;
    }

    void giveinfo() 
    {
        cout << "Company ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Staff Quantity: " << staff_quantity << endl;
        cout << "Revenue: " << revenue << endl;
        cout << "Imported Raw Diamonds: " << imported_raw_diamonds << endl;
        cout << "Exported Diamonds: " << exported_diamond << endl;
        cout << "CEO's Name: " << ceo << endl;
    }

    void getinfo() 
    {
        cout << "Enter Company ID: ";
        cin >> id;
        cin.ignore();  

        cout << "Enter Company Name: ";
        getline(cin, name);

        cout << "Enter Staff Quantity: ";
        cin >> staff_quantity;

        cout << "Enter Annual Revenue (in rupees): ";
        cin >> revenue;

        cout << "Enter Annually Imported Raw Diamonds: ";
        cin >> imported_raw_diamonds;

        cout << "Enter Annually Exported Diamonds: ";
        cin >> exported_diamond;

        cin.ignore(); 
        cout << "Enter CEO's Name: ";
        getline(cin, ceo);
    }
};

int main() 
{
    int n;
    cout << "Enter Number of Companies: ";
    cin >> n;

    
    Company* dia = new Company[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "\nEntering details for Company " << i + 1 << ":" << endl;
        dia[i].getinfo();
    }

    cout << "\nCompany Details:\n";
    for (int i = 0; i < n; i++) 
    {
        dia[i].giveinfo();
    }

    delete[] dia;

    return 0;
}

