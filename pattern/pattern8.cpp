#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    char ch=65;
    cout<<"Enter the no of lines:";
    cin>>no;
    for(i=1;i<=no;i++,ch++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";   
        }
            cout<<"\n";
        
    }
}