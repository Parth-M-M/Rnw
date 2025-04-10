#include <iostream>
using namespace std;

class A {
protected:
    int num1;
public:
    A(int a) : num1(a) 
	{
        cout << "Constructor of A called with value: " << num1 << endl;
    }
};

class B 
{
protected:
    int num2;
public:
    B(int b) : num2(b) 
	{
        cout << "Constructor of B called with value: " << num2 << endl;
    }
};

class C : public A 
{
protected:
    int num3;
public:
    C(int a, int c) : A(a), num3(c) 
	{
        cout << "Constructor of C called with value: " << num3 << endl;
    }
};

class D : public B, public C 
{
    int num4;
public:
    D(int a, int b, int c, int d) : B(b), C(a, c), num4(d) 
	{
        cout << "Constructor of D called with value: " << num4 << endl;
    }

    void sum() 
	{
        int total = num1 + num2 + num3 + num4;
        cout << "Sum of all four numbers: " << total << endl;
    }
};

int main() 
{
    D obj(10, 20, 30, 40);  
    obj.sum();

    return 0;
}

