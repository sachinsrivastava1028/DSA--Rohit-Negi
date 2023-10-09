#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(char j='A';j>='A';j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}