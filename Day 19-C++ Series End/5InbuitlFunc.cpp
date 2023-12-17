#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int p = sqrt(a);
    cout << "Square root of a: " << p << endl;

    int q = pow(a, b);
    cout << "a^b: " << q << endl;

    int r = max(a, b);
    cout << "Maximum of a and b: " << r << endl;

    int s = min(a, b);
    cout << "Minimum of a and b: " << s << endl;

    swap(a, b);
    cout << "After swapping, a: " << a << ", b: " << b << endl;

    return 0;
}
