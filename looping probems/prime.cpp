#include<iostream>
using namespace std;
int main()
{
    int no,i,count=0;
    cout<<"enter a number to check :";
    cin>>no;
    if(no==0)
        cout<<"\n "<<no<<"is not prime";
        else
        {
            for(i=2;i<no;i++)
            {
                if(no%i==0)
                    count++;
            }
        if(count>1)
            cout<<"no is not prime";
            
        else
            cout<<"no is prime";
        }
}
