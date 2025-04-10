#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) 
	{
		
	}

    bool operator < (const Number& other) 
	{
        return value < other.value;
    }

    int getValue() const 
	{
        return value;
    }
};

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number num1(a);
    Number num2(b);

    if (num1 < num2) 
	{
        cout << "The second object has the higher value: " << num2.getValue() << endl;
    } 
	else if (num2 < num1) 
	{
        cout << "The first object has the higher value: " << num1.getValue() << endl;
    } 
	else 
	{
        cout << "Both objects have equal value: " << num1.getValue() << endl;
    }

    return 0;
}

