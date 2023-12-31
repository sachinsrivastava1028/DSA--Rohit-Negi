#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    for(int i=0;i<20;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0;i<20;i++)
    {
        sum+=arr[i];
    }

    cout<<sum<<endl;
}