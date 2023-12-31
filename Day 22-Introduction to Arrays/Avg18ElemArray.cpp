#include<iostream>
using namespace std;

int main()
{
    int arr[18];
    for(int i=0;i<18;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0;i<18;i++)
    {
        sum+=arr[i];
    }

    int avg=sum/18;
    cout<<avg<<endl;
    
}