#include<iostream>
using namespace std;
int main()
{
    int no,i,j,d=1;
    cout<<"Enter the no of lines:";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        for(j=1;j<=i;j++,d++)
        {
            cout<<d<<" ";   
        }
            cout<<"\n";
        
    }
}