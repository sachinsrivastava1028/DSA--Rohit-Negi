#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;

    if(a>b)
    {
        cout<<a;
    }
    else
    {
        if(b>a)
        {
            cout<<b;
        }
        else
        {
            cout<<"Both the numbers can't be same";
        }
    }
    
}