#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

void divide(int a, int b) 
{
    if (b == 0) 
    {
        throw runtime_error("Error: Division by zero is not allowed.");
    }
    cout << "Result of division: " << a / b << endl;
}

void checkVotingEligibility(int age) 
{
    if (age < 18) 
    {
        throw invalid_argument("Error: Age must be at least 18 to vote.");
    }
    cout << "Eligible to vote." << endl;
}

void validatePassword(const string& password) 
{
    bool hasUpper = false;
    for (char ch : password) 
    {
        if (isupper(ch)) 
        {
            hasUpper = true;
            break;
        }
    }
    if (!hasUpper) 
    {
        throw logic_error("Error: Password must contain at least one uppercase letter.");
    }
    cout << "Password is valid." << endl;
}

int main() 
{
    try 
    {
        int num1, num2;
        cout << "Enter two numbers for division (numerator denominator): ";
        cin >> num1 >> num2;
        divide(num1, num2);
    } 
    catch (const exception& e) 
    {
        cout << e.what() << endl;
    }

    try 
    {
        int age;
        cout << "\nEnter your age: ";
        cin >> age;
        checkVotingEligibility(age);
    } 
    catch (const exception& e) 
    {
        cout << e.what() << endl;
    }

    try 
    {
        string password;
        cout << "\nEnter your password: ";
        cin >> password;
        validatePassword(password);
    } 
    catch (const exception& e) 
    {
        cout << e.what() << endl;
    }

    return 0;
}
