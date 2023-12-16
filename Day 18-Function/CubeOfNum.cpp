#include<iostream>
using namespace std;

int cube(int x)
{
    return x*x*x;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    cout<<cube(n);
    
    
}