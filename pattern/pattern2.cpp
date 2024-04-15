#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    cout<<"Enter the no of lines:";
    cin>>no;
    for(i=no;i>=1;i--)
        {
        for(j=1;j<=i;j++)
            cout<<"*"<<" ";
            cout<<"\n";

        }
}