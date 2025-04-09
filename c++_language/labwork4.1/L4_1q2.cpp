#include <iostream>
using namespace std;

class p 
{
    public:
        float c; 
};

class q : public p
{
    public:
        void toFahrenheit()
        {
            float f = (1.8 * c) + 32;
            cout << "Temperature in Fahrenheit is: " << f << endl;
        }
};

class r : public q
{
    public:
        void toKelvin()
        {
            float k = c + 273.15;
            cout << "Temperature in Kelvin is: " << k << endl;
        }
};

int main()
{
    r r1;
    cout << "Enter Temperature in Celsius: ";
    cin >> r1.c; 
    r1.toFahrenheit();
    r1.toKelvin();

    return 0;
}

