#include<iostream>
using namespace std;
int main()
{
    int no,i,j,s;
    cout<<"Enter the no of lines:";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        for(s=no-i;s>=1;s--)
        {
            cout<<"  ";
        }
                for(j=0;j<i*2-1;j++)
                {
                    cout<<" "<<j;
                }
                    cout<<"\n";
                
    }
}