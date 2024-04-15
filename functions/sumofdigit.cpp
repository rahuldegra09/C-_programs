#include <iostream>
using namespace std;
int sum(int n)
{
    int count = 0,sum=0,rem=0;
    while (n != 0)
    {
        rem=n%10;
        sum=rem+sum;
        n = n/10;
    }
    return sum;
}
int main()
{
    int a;
    cout << "enter a no :";
    cin >> a;
    cout << sum(a);
}
