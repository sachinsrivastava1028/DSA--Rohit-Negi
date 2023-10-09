#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n,x;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        char x='A'+n-i;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(k=x;k>='A';k--)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}