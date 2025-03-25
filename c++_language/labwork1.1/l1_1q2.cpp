#include <iostream>
using namespace std;

int main() {
    int first , last ;
    cout<<"Enter entry year : ";
    cin>>first;
    cout<<"Enter exit year : ";
    cin>>last;
    int sum = last/4 ;
    int arr[sum];
    int cnt =0;
    for(int i = first ; i <= last; i++)
    {
        if(i%4==0)
        {
               arr[cnt]=i;
               cnt++;
        }
    }
    for (int i = cnt - 1; i >= 0; i--) 
    {
        cout <<" "<< arr[i]<<" ";
    }


    return 0;
}
