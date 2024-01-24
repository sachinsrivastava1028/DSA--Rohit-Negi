#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[1000];

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout << "Element "<< (i+1) << ": ";
        cin >> arr[i];
    }
    
    int start=0, end=n-1, ans=n, mid, key;
    cout<<"Enter the key: ";
    cin>>key;

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
}
