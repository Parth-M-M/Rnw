#include <iostream>
#include <string>
using namespace std;

class cafe {
private:
    int id;
    string name;
    string type;
    int rating;
    string location;
    int established_year;
    int staff_quantity;

public:
    cafe() 
    {
        
    } 
    cafe(int id, string name, string type, int rating, string location, int established_year, int staff_quantity) 
    {
        this->id = id;
        this->name = name;
        this->type = type;
        this->rating = rating;
        this->location = location;
        this->established_year = established_year;
        this->staff_quantity = staff_quantity;
    }

    void getdata() 
    {
        cout << "Enter Cafe ID: ";
        cin >> id;
        cin.ignore(); 
        
        cout << "Enter Cafe Name: ";
        getline(cin, name);

        int choice;
        do {
            cout << "Enter 0 for Inhouse and 1 for Rooftop: ";
            cin >> choice;
        } while (choice != 0 && choice != 1);

        type = (choice == 1) ? "Rooftop" : "Inhouse";

        do {
            cout << "Enter Cafe Rating (1 star to 5 star): ";
            cin >> rating;
        } while (rating < 1 || rating > 5);

        cin.ignore();
        cout << "Enter Cafe Location: ";
        getline(cin, location);

        do {
            cout << "Enter Cafe Established Year: ";
            cin >> established_year;
        } while (established_year < 1800 || established_year > 2025);

        cout << "Enter Cafe Staff Quantity: ";
        cin >> staff_quantity;
    }

    void givedata() const
    {
        cout << "\nCafe ID: " << id << endl;
        cout << "Cafe Name: " << name << endl;
        cout << "Cafe Type: " << type << endl;
        cout << "Cafe Rating: " << rating << " stars" << endl;
        cout << "Cafe Location: " << location << endl;
        cout << "Cafe Established Year: " << established_year << endl;
        cout << "Cafe Staff Quantity: " << staff_quantity << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter the number of cafes you want to register: ";
    cin >> n;

    cafe* cafes = new cafe[n];

    for (int i = 0; i < n; i++) 
    {
        cout << "\nEntering details for Cafe " << i + 1 << ":\n";
        cafes[i].getdata();
    }

    cout << "\nDisplaying cafe details:\n";
    for (int i = 0; i < n; i++) 
    {
        cafes[i].givedata();
    }

    delete[] cafes;

    return 0;
}

