#include<iostream>
using namespace std;

    int setBits(int N) {
        //BRIAN KERNINGAM'S ALGORITHM
        int c=0;
        
        while(N>0)
        {
            N=N&N-1;
            c++;
        }
        return c;
    }

    int main()
    {
        int N;
        cout << "Enter a number: ";
        cin >> N;

        cout<<setBits(N);
    }