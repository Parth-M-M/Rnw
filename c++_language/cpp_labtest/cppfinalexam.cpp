#include <iostream>
#include <string>
using namespace std;

class Book 
{
public:
    string title;
    string author;
    int publishedYear;

    void display() 
    {
        cout << "Title: " << title << ", Author: " << author << ", Year: " << publishedYear << endl;
    }

    void set()
    {
        cin.ignore(); 
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author: ";
        getline(cin, author);
        cout << "Enter Published Year: ";
        cin >> publishedYear;
    }
};

int main() 
{
    int n;
    cout << "Enter total number of books to enter: ";
    cin >> n;

    Book Book[n]; 

    for (int i = 0; i < n; i++) 
    {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        Book[i].set();
    }

    cout << "\nDisplaying Book Details:\n";
    for (int i = 0; i < n; i++) 
    {
        Book[i].display();
    }

    

    return 0;
}







---------------------------------------------------------------------------------------------------





#include <iostream>
using namespace std;

class Person 
{
private:
    string name;
    int age;
    string address;

public:
    
    Person() {
        name = "";
        age = 0;
        address = "";
    }

    
    Person(string name, int age, string address) 
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    string getName() { return name; }
    int getAge() { return age; }
    string getAddress() { return address; }

    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setAddress(string address) { this->address = address; }

    void set()
    {
        cin.ignore(); 
        cout << "Enter Person's name: ";
        getline(cin, name);
        cout << "Enter Person's address: ";
        getline(cin, address);
        cout << "Enter Person's age: ";
        cin >> age;
    }

    void display() 
    {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    int N;
    cout << "Enter number of persons you want to register: ";
    cin >> N;

    Person people[N]; 

    for (int i = 0; i < N; i++) {
        cout << "\n--- Enter details for person " << i + 1 << " ---" << endl;
        people[i].set();
    }

    cout << "\n--- Registered Persons ---" << endl;
    for (int i = 0; i < N; i++) {
        people[i].display();
    }

    return 0;
}




---------------------------------------------------------------------------------------------------



#include <iostream>
using namespace std;

class Animal 
{
private:
    string name;
    string sound;

public:
    void setName(string name) 
    {
        this->name = name; 
    }
    void setSound(string sound) 
    {
        this->sound = sound; 
    }

    string getName() 
    {
        return name; 
    }
    string getSound() 
    {
        return sound; 
    }
};

class Dog : public Animal

{
    
public:
    void makeSound() 
    
    {
        
        setSound("Woof!");
        cout << "Dog says: " << getSound() << endl;
        
    }
    
};

class Cat : public Animal 
{
public:
    void makeSound() 
    {
        setSound("Meow!");
        cout << "Cat says: " << getSound() << endl;
    }
};

int main() 
{
    Dog d;
    d.setName("Buddy");
    d.makeSound();

    Cat c;
    c.setName("Whiskers");
    c.makeSound();

    return 0;
}








------------------------------------------------------------------------------------------------------------






#include <iostream>
using namespace std;

class Animal 
{
protected:
    string name;

public:
    void setName(string n) 
    {
        name = n; 
        
    }
    virtual void displayDetails() = 0;
};

class Dog : public Animal 
{
public:
    void displayDetails() override 
    {
        cout << "Dog Name: " << name << ", Sound: Woof!" << endl;
    }
};

class Cat : public Animal 
{
public:
    void displayDetails() override 
    {
        cout << "Cat Name: " << name << ", Sound: Meow!" << endl;
    }
};

int main() 
{
    Animal* animals[2];
    Dog d;
    d.setName("Max");
    Cat c;
    c.setName("Luna");

    animals[0] = &d;
    animals[1] = &c;

    for (int i = 0; i < 2; i++) 
    {
        animals[i]->displayDetails();
    }

    return 0;
}





------------------------------------------------------------------------------------------------------------



#include <iostream>
using namespace std;

class Complex 
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) 
    {
        
    }

    Complex operator-(Complex const& other) 
    {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() 
    {
        cout << real << " + " << imag << "j" << endl;
    }
};

int main() 
{   int a,b,c,d;
    cout <<"Enter c1 varibles a , b :";
    cin >>a>>b;
    cout <<"Enter c1 varibles a , b :";
    cin >>c>>d;
    
    Complex c1(a, b), c2(c, d);
    Complex c3 = c1 - c2;
    c3.display();

    return 0;
}





----------------------------------------------------------------------------------------------------








#include <iostream>
#include <fstream>
using namespace std;

class FileManager 
{
public:
    void readFile(const string& filename) 
    {
        ifstream file(filename);
        if (!file.is_open()) 
        {
            throw runtime_error("Unable to open file.");
        }

        string line;
        while (getline(file, line)) 
        {
            cout << line << endl;
        }

        file.close();
    }
};

int main() 
{
    FileManager fm;
    try
    {
        fm.readFile("data.txt");
    }
    catch (const exception& e) 
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}







--------------------------------------------------------------------------------------------------------


#include <iostream>
#include <cmath>
using namespace std;

class Shape 
{
public:
    virtual double area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) : radius(r) 
    {
        
    }

    double area() override 
    {
        return 3.14159 * radius * radius;
    }

    void draw() override 
    {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape 
{
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) 
    {
        
    }

    double area() override 
    {
        return width * height;
    }

    void draw() override 
    {
        cout << "Drawing a Rectangle of " << width << " x " << height << endl;
    }
};

int main() 
{
    Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; i++) 
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl;
    }

    
    for (int i = 0; i < 2; i++) 
    {
        delete shapes[i];
    }

    return 0;
}







-------------------------------------------------------------------------------------------------------



