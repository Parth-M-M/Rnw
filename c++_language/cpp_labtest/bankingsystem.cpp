#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class BankAccount 
{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo = 0, string name = "", double bal = 0.0)
        : accountNumber(accNo), accountHolderName(name), balance(bal) 
        {
            
        }

    virtual void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else 
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    virtual void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
        else 
        {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    double getBalance() const 
    {
        return balance;
    }

    virtual void displayAccountInfo() const 
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() = 0; 
};

class SavingsAccount : public BankAccount 
{
private:
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal), interestRate(rate) 
        {
            
        }

    void calculateInterest() override 
    {
        double interest = balance * interestRate / 100;
        cout << "Savings Interest: " << interest << endl;
    }

    void displayAccountInfo() const override 
    {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public BankAccount 
{
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal), overdraftLimit(limit) 
        {
            
        }

    void withdraw(double amount) override 
    {
        if (amount <= balance + overdraftLimit) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else 
        {
            cout << "Exceeded overdraft limit!" << endl;
        }
    }

    void checkOverdraft() const 
    {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }

    void calculateInterest() override 
    {
        cout << "No interest for checking accounts." << endl;
    }

    void displayAccountInfo() const override 
    {
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount 
{
private:
    int term; 
    double interestRate;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t, double rate)
        : BankAccount(accNo, name, bal), term(t), interestRate(rate) 
        {
            
        }

    void calculateInterest() override 
    {
        double interest = balance * interestRate * term / (12 * 100);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }

    void displayAccountInfo() const override 
    {
        BankAccount::displayAccountInfo();
        cout << "Term (months): " << term << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() 
{
    const int MAX_ACCOUNTS = 10;
    BankAccount* accounts[MAX_ACCOUNTS];
    int count = 0;

    int choice;
    do 
    {
        cout <<endl<<"=== Banking System Menu ==="<<endl;
        cout << "1. Create Savings Account"<<endl;
        cout << "2. Create Checking Account"<<endl;
        cout << "3. Create Fixed Deposit Account"<<endl;
        cout << "4. Deposit"<<endl;
        cout << "5. Withdraw"<<endl;
        cout << "6. Display Account Info"<<endl;
        cout << "7. Calculate Interest"<<endl;
        cout << "8. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int accNo, term, index;
        string name;
        double bal, rate, amount, limit;

        switch (choice) 
        {
            case 1:
                if (count < MAX_ACCOUNTS) 
                {
                    cout << "Enter Account Number: ";
                    cin >> accNo;

                    cout << "Enter Name: ";
                    cin >> name;
                    
                    cout << "Enter Balance: ";
                    cin >> bal;
                    
                    cout << "Enter Interest Rate: ";
                    cin >> rate;

                    accounts[count++] = new SavingsAccount(accNo, name, bal, rate);
                } 
                else 
                {
                    cout << "Account limit reached!" << endl;
                }
                break;

            case 2:
                if (count < MAX_ACCOUNTS) 
                {
                    cout << "Enter Account Number: ";
                    cin >> accNo;
                    
                    cout << "Enter Name: ";
                    cin >> name;
                    
                    cout << "Enter Balance: ";
                    cin >> bal;
                    
                    cout << "Enter Overdraft Limit: ";
                    cin >> limit;

                    accounts[count++] = new CheckingAccount(accNo, name, bal, limit);
                }
                else 
                {
                    cout << "Account limit reached!" << endl;
                }
                break;

            case 3:
                if (count < MAX_ACCOUNTS) 
                {
                    cout << "Enter Account Number: ";
                    cin >> accNo;
                    
                    cout << "Enter Name: ";
                    cin >> name;
                    
                    cout << "Enter Balance: ";
                    cin >> bal;
                    
                    cout << "Enter Term (months): ";
                    cin >> term;
                    
                    cout << "Enter Interest Rate: ";
                    cin >> rate;

                    accounts[count++] = new FixedDepositAccount(accNo, name, bal, term, rate);
                }
                else 
                {
                    cout << "Account limit reached!" << endl;
                }
                break;

            case 4:
                cout << "Enter account index: ";
                cin >> index;
                
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (index >= 0 && index < count)
                {
                    accounts[index]->deposit(amount);
                }
                else 
                {
                    cout << "Invalid index!" << endl;
                }
                break;

            case 5:
                cout << "Enter account index: ";
                cin >> index;
                
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (index >= 0 && index < count)
                {
                    accounts[index]->withdraw(amount);
                }
                else 
                {
                    cout << "Invalid index!" << endl;
                }
                break;

            case 6:
                cout << "Enter account index: ";
                cin >> index;
                if (index >= 0 && index < count)
                {
                    accounts[index]->displayAccountInfo();
                }
                else 
                {
                    cout << "Invalid index!" << endl;
                }
                break;

            case 7:
                cout << "Enter account index: ";
                cin >> index;
                if (index >= 0 && index < count)
                {
                    accounts[index]->calculateInterest();
                }
                else
                {
                    cout << "Invalid index!" << endl;
                }
                break;

            case 8:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 8);

    for (int i = 0; i < count; i++)
        delete accounts[i];

    return 0;
}
