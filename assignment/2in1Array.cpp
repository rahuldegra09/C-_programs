#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],a1,b2,i,j,k,c2;
    cout<<"enter length of array a and b:";
    cin>>a1>>b2;
    cout<<"enter element of a :";
    for(i=0;i<a1;i++)
    {
        cin>>a[i];
    }
    cout << "enter element of b :";
    for (i=0;i<b2;i++)
    {
        cin>>b[i];
    }
    cout<<"array a is :";
    for (i = 0; i < a1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout << "\narray b is :";
    for (i = 0; i < b2; i++)
    {
        cout << b[i] << " ";
    }
    int c[20];
    i=k=0,j=b2-1;
    while(i<a1&&j>=0)
    {
        if (a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j--];
    }
    while(i<a1)
    c[k++]=a[i++];
    while(j>=0)
    c[k++]=b[j--];
    cout<<"\narray c is :";
    for(k=0;k<(a1+b2);k++)
    {
        cout<<c[k]<<" ";
    }
}