#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;

    if(n<3)
    {
        cout<<"NOT VALID";
    }

    else
    {
        int arr[n];
        cout<<"\nEnter "<<(n)<<" elements:\n";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

         int first, second, third;
    first = second = third = INT_MIN;

    for (int i=0;i<n;i++) 
    {
        if (arr[i] > first) {
            first = arr[i];
        } else if (arr[i] > second) {
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
        
    }
    cout << "The third largest element is: " << third << endl;
  }
}