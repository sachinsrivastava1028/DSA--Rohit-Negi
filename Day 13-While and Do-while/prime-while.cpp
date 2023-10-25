#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    int i=2;
    while(i<=n-1)
    {
        if(n%i==0)
        {
        cout<<i<<" ";
        }
        i=i+1;
    }
    

}