#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    int i=2;
    bool flag=false;
    while(i<=n-1)
    {
        if(n%i==0)
        {
        flag=true;
        cout<<"Not Prime";
        break;
        }
        i=i+1;
    }
    if(flag==false)
    {
        cout<<"Prime";
    }
    

}