#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"enter the sides of triangle:";
    cin>>a>>b>>c;
    if((a==b) || (b==c) || (c==a))
        cout<<"triangle is isosceles";
    else
        cout<<"triangle is not isosceles";
}