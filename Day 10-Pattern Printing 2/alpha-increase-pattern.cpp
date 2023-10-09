#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char k;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(k='E';k>='E'-(i-1);k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    

}