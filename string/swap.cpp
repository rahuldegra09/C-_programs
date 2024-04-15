#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[10],b[10],ch,temp;
    int i=0,j=0;
    cout<<"enter a string:";
    while((ch=getchar())!='\n')
    {
        a[j]=ch;
        j++;
    }
    cout<<"enter the 2nd string:";
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    for(i=0;i<5;i++)
    {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
    }
    cout<<"now a  string is:";
    for (i = 0; i < 5; i++)
    {
        cout << a[i];
    }
    cout<<"\nstring b is :";
    for (i = 0; i < 5; i++)
    {
        cout<<b[i];
    }
}