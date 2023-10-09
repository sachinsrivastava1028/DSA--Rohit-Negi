#include<iostream>
using namespace std;

int main()
{
    int i,j;
    // cout<<"Enter the value of 'n': ";
    // cin>>n;

    for(i=0;i<=5;i++)
    {
        for(j=10;j<=15-5+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}