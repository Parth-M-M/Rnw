#include <iostream>
#include <string>
using namespace std;

class hotel
{
public:
    int id;
    static string name;
    string htype;
    int rating;
    string location;
    int established_year;
    int staff_quantity;
    int room_quantity;

    void getdata()
    {
        cout << "Enter Hotel id: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Hotel type: ";
        getline(cin,htype);
        

        cout << "Enter Hotel Rating: ";
        cin >> rating;
        cin.ignore();

        cout << "Enter Hotel location: ";
        getline(cin, location);

        cout << "Enter Hotel Year: ";
        cin >> established_year;
        cin.ignore();

        cout << "Enter Hotel staff quantity: ";
        cin >> staff_quantity;
        cin.ignore();

        cout << "Enter Hotel room quantity: ";
        cin >> room_quantity;
        cin.ignore();
    }

    void givedatalist()
    {
        cout << "Hotel ID: " << id << endl;
        cout << "Hotel Type: " << htype << endl;
        cout << "Hotel Rating: " << rating << endl;
        cout << "Hotel Location: " << location << endl;
        cout << "Hotel Year: " << established_year << endl;
        cout << "Hotel Staff Quantity: " << staff_quantity << endl;
        cout << "Hotel Room Quantity: " << room_quantity << endl;
    }
};

string hotel::name = "Hilton";

int main()
{
    int n, c;
    cout << "Enter number of hotels you want to enter: ";
    cin >> n;
    
    hotel branch[n]; 

    for (int i = 0; i < n; i++)
    {
        branch[i].getdata();
    }

    cout << "Enter 0 for hotel list and 1 for search: ";
    cin >> c;

    if (c == 0)
    {
        for (int i = 0; i < n; i++)
        {
            branch[i].givedatalist();
        }
    }
    else if (c == 1)
    {
        int search_id, found = 0;
        cout << "Enter hotel ID to search: ";
        cin >> search_id;

        for (int i = 0; i < n; i++)
        {
            if (branch[i].id == search_id)
            {
                cout << "Hotel found!" << endl;
                branch[i].givedatalist();
                found = 1;
                break;
            }
        }
        if (!found)
        {
            cout << "Hotel with ID " << search_id << " not found!" << endl;
        }
    }
    else
    {
        cout << "Enter a valid choice!" << endl;
    }

    return 0;
}

