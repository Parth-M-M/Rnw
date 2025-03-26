#include <iostream>
using namespace std;
class Time
{
    public:
    
    void sectotime(int a)
    {
        int min = (a%3600)/60;
        int hour = a/3600;
        int seconds = a%60;
        cout<<"HH : MM : SS =>"<<hour<<":"<<min<<":"<<seconds;
    }
    void timetosec()
    {   int a , b, c, d ;
        cout<<"Enter Hours : ";
        cin>>a;
        cout<<"Enter Minutes : ";
        cin>>b;
        cout<<"Enter seconds : ";
        cin>>c;
        
        d = (c + (b*60)+(a*3600));
        cout<<"Total seconds : "<<d;
    }
};

int main() 
{
    Time T ;
    int in;
    int choice;
    cout<<"Enter 1 for seconds to Time "<<endl;
    cout<<"Enter 0 for Time to second "<<endl;
    cout<<"Enter Your choice : ";
    cin>>choice;
    if (choice==1)
    {
    cout<<"Enter seconds :";
    cin>>in;
    T.sectotime(in);
    }
    else if(choice==0)
    {
      T.timetosec();  
    }
    else
    {
       cout<<"Please Enter valid Answer"; 
    }
    return 0;
}

