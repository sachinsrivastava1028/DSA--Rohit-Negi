#include<iostream>
using namespace std;

void Swap(int &m,int &n)
{
    int o;
    o=m;
    m=n;
    n=o;
}


int main()
{
    int a,b;
    cout<<"Enter the 1st num: ";
    cin>>a;
    cout<<"Enter the 2nd num: ";
    cin>>b;

    Swap(a,b);
    cout<<"\nAfter swapping\n";
    cout<<"The value of 1st variable is : "<<a<<endl;
    cout<<"The value of 2nd variable is : "<<b<<endl;
}