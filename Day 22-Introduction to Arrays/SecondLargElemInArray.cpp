#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if(n<3)
    {
        cout<<"NOT VALID"; 
    }
    
    else
    {
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cout << "Element "<< (i+1) << ": ";
            cin >> arr[i];
        }

        int firstMax = INT_MIN;
        int secondMax = INT_MIN;

        for (int i=0;i<n;i++) 
        {
            if (arr[i] > firstMax) 
            {
            secondMax = firstMax;
            firstMax = arr[i];
            } 
            else if(arr[i] > secondMax && arr[i] < firstMax) 
            {
                secondMax = arr[i];
            }
    }

    std::cout << "The second largest element is: " << secondMax << std::endl;
    return 0;
    }
}


