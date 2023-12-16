#include<iostream>
using namespace std;

int Factorial(int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main() 
{
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"\nEnter the value of r: ";
    cin>>r;

    int a=Factorial(n);
    int b=Factorial(r);
    int c=Factorial(n-r);

     cout<<a/(b*c)<<endl;
}
