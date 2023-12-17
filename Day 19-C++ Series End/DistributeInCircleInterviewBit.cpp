#include<iostream>
using namespace std;

int Distribute(int A, int B, int C) 
{
    int n=(A+C-1)%B;
    if(n==0)
    {
        return B;
    }
    return n;   
}

int main()
{
    int A,B,C;
    cout << "Enter the value of A: ";
    cin >> A;
    cout << "\nEnter the value of B: ";
    cin >> B;
    cout << "\nEnter the value of C: ";
    cin >> C;

    cout<<Distribute(A,B,C)<<endl;
}