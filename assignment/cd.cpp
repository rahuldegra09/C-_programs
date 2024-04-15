#include<iostream>
using namespace std;
int main()
{
    char com[30];
    int i=2,a=0;
    cout<<"Enter comment";
    cin>>com;
    if(com[0]=='/')
    {
        if(com[0]=='/')
            cout<<"\n it sis comment";
        else
         if(com[1]=='*')
            {
                for(i=2;i<31;i++)
                {
                    if(com[i]=='*'&&com[i+1]=='/')
                    {
                        cout<<"\nIt is a Comment";
                        a=1;
                        break;
                    }
                    else
                    continue;
                }
                if(a==0)
                cout<<"\nIt is not comment";
            }
                else
                cout<<"\nIt is not comment";
        }
        else
        cout<<"it is not a comment";
}