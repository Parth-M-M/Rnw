#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
    int id ;
    string name;
    int age;
    string course;
    string city;
    string email;
    string collage;
    
    void getdata()
    {   cout<<"|-------------------------------------|"<<endl;
        cout<<"Enter student id :";
        cin>>id;
        cin.ignore();
        cout<<"Enter student Name :";
        getline(cin,name);
        cout<<"Enter student Age :";
        cin>>age;
        cin.ignore();
        cout<<"Enter student course :";
        getline(cin,course);
        cout<<"Enter student city :";
        getline(cin,city);
        cout<<"Enter student email :";
        getline(cin,email);
        cout<<"Enter student college :";
        getline(cin,collage);
    }
    
    void givedata()
    {   cout<<"|-------------------------------------|"<<endl;
        cout<<"Student id => "<<id<<endl;
        cout<<"Student name => "<<name<<endl;
        cout<<"Student age => "<<age<<endl;
        cout<<"Student course => "<<course<<endl;
        cout<<"Student city => "<<city<<endl;
        cout<<"Student email => "<<email<<endl;
        cout<<"Student id => "<<collage<<endl;
        cout<<"|-------------------------------------|"<<endl;
    }
};
int main() {
    int n;
    cout<<"Enter Total students :";
    cin>>n;
    student stu[n];
    for(int i = 0 ;i < n ; i++)
    {
        stu[i].getdata();
    }
    for(int i = 0 ;i < n ; i++)
    {
        stu[i].givedata();
    }

    return 0;
}
