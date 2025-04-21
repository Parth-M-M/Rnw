#include <iostream>
#include <cmath>
using namespace std;

class Shape 
{
public:
    virtual void calculate() = 0;
};

class Circle : public Shape 
{
    float radius;
public:
    Circle(float r) 
    {
        radius = r;
    }

    void calculate() override 
    {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Triangle : public Shape 
{
    float base, height;
public:
    Triangle(float b, float h) 
    {
        base = b;
        height = h;
    }

    void calculate() override 
    {
        float area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

class Rectangle : public Shape 
{
    float length, breadth;
public:
    Rectangle(float l, float b) 
    {
        length = l;
        breadth = b;
    }

    void calculate() override 
    {
        float area = length * breadth;
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() 
{
    Shape* shape;

    shape = new Circle(5.0);
    shape->calculate();
    delete shape;

    shape = new Triangle(4.0, 6.0);
    shape->calculate();
    delete shape;

    shape = new Rectangle(4.0, 7.0);
    shape->calculate();
    delete shape;

    return 0;
}
