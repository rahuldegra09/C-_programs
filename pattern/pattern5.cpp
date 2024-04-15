#include<iostream>
using namespace std;
int main()
{
    int no,i,j,h=0,s=0;
    cout<<"Enter the no of lines:";
    cin>>no;
    for (i = 1; i <= no; i++)
    {
        for (s = no - i; s >= 1; s--)
        {
            cout<<"  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        for (h = i - 1; h > 0; h--)
        {
           cout<<h<<" ";
        }
        cout<<"\n";
    }
}