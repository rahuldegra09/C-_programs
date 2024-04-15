#include<iostream>
using namespace std;
int digit(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int a;
    cout<<"enter a no :";
    cin>>a;
    cout<<digit(a);
}

