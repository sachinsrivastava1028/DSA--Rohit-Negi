#include<iostream>
using namespace std;

int main()
{
    char arr[26];

    for(int i=0;i<26;i++)
    {
        cout<<"Enter the characters: ";
        cin>>arr[i];
    }

    for(int i=0;i<26;i++)
    {
        cout<<arr[i]<<" ";
    }
}