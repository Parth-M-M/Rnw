#include <iostream>
using namespace std;

int main() {
    int a ;
    cout<<"Enter array size : ";
    cin>>a;
    int arr[a];
    for(int i = 0; i < a; i++)
    {
        cout << "arr[" << i << "] = ";
        cin>>arr[i];
        
    }
    cout<<"Even element in the array are :";
    for(int i = 0; i < a; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<",";
        }
        
    }

    return 0;
}
