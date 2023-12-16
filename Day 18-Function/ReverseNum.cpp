#include<iostream>
using namespace std;

int Reverse(int x)
{
    // if(x<=-5000 || x>=5000){
    //      return 0;
    // }

    int ans=0,rem;
     
    while(x!=0)
    {
         rem=x%10;
            x/=10;
            ans=ans*10+rem;
    }
    return ans;
}

// int main()
// {
//     int num;
//     cout<<"Enter the num: ";
//     cin>>num;

//     cout<<Reverse(num);
// }

int main()
{
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    if(num>=-5000 && num<=5000)
    {
         cout<<Reverse(num);
    }
    else
    {
        cout<<"0";
    }
}
   
