#include<iostream>
using namespace std;

int main()
{
    char x='A';
    while(x<='Z')
    {
        cout<<x<<" ";
        x=x+1;
    }
    cout<<endl;

    char y='a';
    while(y<='z')
    {
        cout<<y<<" ";
        y=y+1;
    }
}