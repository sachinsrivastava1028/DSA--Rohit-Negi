#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(k=n;k>n-i;k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    

}