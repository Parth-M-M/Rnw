#include <iostream>
#include <cstring>
using namespace std;

class Train {
private:
    int trainnumber;
    char trainname[50];
    char source[50];
    char destination[50];
    char traintime[50];
    static int traincount;

public:
    Train() {
        trainnumber = 0;
        strcpy(trainname, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(traintime, "");
        traincount++;
    }

    Train(int tnum, const char* tname, const char* tsource, const char* des, const char* ttime) {
        trainnumber = tnum;
        strcpy(trainname, tname);
        strcpy(source, tsource);
        strcpy(destination, des);
        strcpy(traintime, ttime);
        traincount++;
    }

    ~Train() {
        traincount--;
    }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainnumber;
        cin.ignore();  // Clear newline from buffer

        cout << "Enter Train Name: ";
        cin.getline(trainname, 50);

        cout << "Enter Train Source: ";
        cin.getline(source, 50);

        cout << "Enter Train Destination: ";
        cin.getline(destination, 50);

        cout << "Enter Train Departure Time (in AM/PM format: ";
        cin.getline(traintime, 50);
    }

    void displayTrainDetails() {
        cout << "Train Number: " << trainnumber << endl;
        cout << "Train Name: " << trainname << endl;
        cout << "Train Source: " << source << endl;
        cout << "Train Destination: " << destination << endl;
        cout << "Train Time: " << traintime << endl;
    }

    static int getTraincount() {
        return traincount;
    }

    int getTrainNumber() {
        return trainnumber;
    }
};

int Train::traincount = 0;

class railwaysystem {
private:
    Train trains[100];
    int totaltrain;

public:
    railwaysystem() {
        totaltrain = 0;
    }

    void addTrain() {
        if (totaltrain < 100) {
            trains[totaltrain].inputTrainDetails();
            totaltrain++;
        } else {
            cout << "Cannot add more trains. Maximum limit reached!" << endl;
        }
    }

    void displayAllTrains() {
        if (totaltrain == 0) {
            cout << "No train records found." << endl;
            return;
        }
        for (int i = 0; i < totaltrain; i++) {
            cout << "\nTrain " << i + 1 << ":" << endl;
            trains[i].displayTrainDetails();
        }
    }

    void searchTrainByNumber(int number) {
        for (int i = 0; i < totaltrain; i++) {
            if (trains[i].getTrainNumber() == number) {
                cout << "Train found!" << endl;
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "Train with number " << number << " not found!" << endl;
    }
};

int main() {
    railwaysystem System;
    int choice;

    do {
        cout << "\nRailway System Menu:\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                System.addTrain();
                break;
            case 2:
                System.displayAllTrains();
                break;
            case 3:
                int n;
                cout << "Enter Train Number: ";
                cin >> n;
                System.searchTrainByNumber(n);
                break;
            case 4:
                cout << "Exiting the System. Goodbye!\n";
                break;
            default:
                cout << "Invalid input. Please enter a valid option.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

