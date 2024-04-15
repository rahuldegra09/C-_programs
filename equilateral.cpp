#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"enter the sides of triangle:";

    cin>>a>>b>>c;
    if(a==b && b==c)
        cout<<"triangle is equilateral";
    else
        cout<<"triangle is not equilateral";
}