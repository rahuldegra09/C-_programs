#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,hold,l,n;
    cout<<"enter the length of array:";
    cin>>l;
    cout<<"enter the element of array:";
    for(i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    for (i = 0; i < l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nshift for :";
    cin>>n;
    n=n%10;
    while(n>0)
    {
        hold=arr[0];
        for (i=0;i<l-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[l-1]=hold;
        n--;
    }
    cout<<"\nthe shifted array is :";
    for (i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
}