#include<iostream>
using namespace std;
float max(float a,float b,float c)
{
    float max=0;
    if(a>b)
        max=a;
    else
        max=b;
    if (c>max)
        max=c;
    return max;
}
int main()
{
    float a,b,c;
    cout<<"enter three float numbers;";
    cin>>a>>b>>c;
    cout<<max(a,b,c);
}
