#include<iostream>
using namespace std;

int countBitsFlip(int a, int b){
        
        int n=a^b;
        int count=0;
        
        while(n>0)
        {
            n=n&(n-1);
            count++;
        }
        return count;
    }

int main()
{
    int a,b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "\nEnter the second number: ";
    cin >> b;

    cout<<countBitsFlip(a,b);
}