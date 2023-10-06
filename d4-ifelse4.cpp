#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Please, enter your age: ";
    cin>>age;

    if(age<=12)
    {
        cout<<"Yes";
    }
    else
    {
        if(age>=65)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
}