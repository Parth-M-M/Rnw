#include <iostream>
using namespace std;

class RBI {
protected:
    float rate;
public:
    virtual void getROI() 
	{
        cout << "RBI base rate of interest is: " << rate << "%" << endl;
    }
};

class SBI : public RBI 
{
public:
    SBI() 
	{
        rate = 6.5; 
    }

    void getROI() override 
	{
        cout << "SBI Rate of Interest: " << rate << "%" << endl;
    }
};

class BOB : public RBI 
{
public:
    BOB() 
	{
        rate = 6.7; 
    }

    void getROI() override 
	{
        cout << "BOB Rate of Interest: " << rate << "%" << endl;
    }
};

class ICICI : public RBI 
{
public:
    ICICI() 
	{
        rate = 6.8; 
    }

    void getROI() override 
	{
        cout << "ICICI Rate of Interest: " << rate << "%" << endl;
    }
};

int main() 
{
    SBI sbi;
    BOB bob;
    ICICI icici;

    sbi.getROI();
    bob.getROI();
    icici.getROI();

    return 0;
}

