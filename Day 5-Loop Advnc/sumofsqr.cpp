#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the value of'n': ";
    cin>>n;
    
    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i*i;
    }
    cout<<sum;
}