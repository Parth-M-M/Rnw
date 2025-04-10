#include <iostream>
using namespace std;

class Arithmetic {
public:

    virtual void calculate() {}
};

class Calculator : public Arithmetic {
public:
    void calculate(int a, int b) {
        if (b != 0)
            cout << "Division: " << a << " / " << b << " = " << (float)a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    void calculate(int a, int b, int c) {
        cout << "Subtraction: " << a << " - " << b << " - " << c << " = " << a - b - c << endl;
    }

    void calculate(int a, int b, int c, int d) {
        cout << "Multiplication: " << a << " * " << b << " * " << c << " * " << d
             << " = " << a * b * c * d << endl;
    }

    void calculate(int a, int b, int c, int d, int e) {
        cout << "Addition: " << a << " + " << b << " + " << c << " + " << d << " + " << e
             << " = " << a + b + c + d + e << endl;
    }
};

int main() {
    Calculator calc;

    calc.calculate(20, 4);                     
    calc.calculate(10, 3, 2);                  
    calc.calculate(2, 3, 4, 5);                 
    calc.calculate(1, 2, 3, 4, 5);              

    return 0;
}

