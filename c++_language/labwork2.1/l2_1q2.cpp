#include <iostream>
#include <string>
using namespace std;

class crs
{
public:
    int id;
    int year;
    string model;
    string color;
    string car_company_name;

    void dataintake()
    {
        cout << "Enter car id: ";
        cin >> id;
        cin.ignore(); 
        
        cout << "Enter car release year: ";
        cin >> year;
        cin.ignore(); 
        
        cout << "Enter car model: ";
        getline(cin,model);
        
        
        cout << "Enter car color: ";
        getline(cin,color);
        
        
        cout << "Enter car company name: ";
        getline(cin,car_company_name);
        
    }

    void dataoutgoing()
    {
        cout << "---------------------------------" << endl;
        cout << "car ID: " << id << endl;
        cout << "car company name : " << car_company_name << endl;
        cout << "car color: " << color << endl;
        cout << "car model: " << model << endl;
        cout << "car release year: " << year << endl;
        
    }
};

int main()
{
    crs car[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "\nEnter details for car " << i + 1 << "=>" << endl;
        car[i].dataintake();
    }

    cout << "\n\nDisplaying car details:\n";
    for (int i = 0; i < 4; i++)
    {
        car[i].dataoutgoing();
    }
    return 0;
}

