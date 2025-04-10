#include <iostream>
using namespace std;

class Cricket 
{
public:
    virtual void getTotalOvers() 
	{
        cout << "Cricket match overs vary depending on the format." << endl;
    }
};

class T20Match : public Cricket 
{
public:
    void getTotalOvers() override 
	{
        cout << "A T20 match has 20 overs per innings." << endl;
    }
};

class TestMatch : public Cricket 
{
public:
    void getTotalOvers() override 
	{
        cout << "A Test match has unlimited overs, typically played over 5 days." << endl;
    }
};

int main() 
{
    Cricket* match;

    T20Match t20;
    match = &t20;
    match->getTotalOvers();  

    TestMatch test;
    match = &test;
    match->getTotalOvers();  

    return 0;
}

