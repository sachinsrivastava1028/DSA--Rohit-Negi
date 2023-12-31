#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements you want in array: ";
    cin >> size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout << "Element["<<i+1<<"] = ";
        cin >> arr[i];
    }

    int target;
    cout << "\nEnter the element to search for: ";
    cin >> target;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            int index=i;
            cout<<index<<endl;
            break;
        }
        else
        {
            cout<<"-1"<<endl;
            break;
        }
    }
    
    
}