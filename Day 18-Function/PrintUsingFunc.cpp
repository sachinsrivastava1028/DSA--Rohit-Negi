#include<iostream>
using namespace std;

void Print(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"Hello Coder Army"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    Print(n);
}