#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"enter two integer values";
    cin>>a>>b;
    if(a==b)
        cout<<"entered no. is equal";
    else if (a>b)
        {
            max=a;
            cout<<"max is:"<<max;
        }
        else
        {
            max=b;
            cout<<"max is:"<<max;
        }
}