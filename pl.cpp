#include<iostream>
using namespace std;
int main()
{
    int sp,cp,p,l;
    cout<<"enter cost price:";
    cin>>cp;
    cout<<"\nenter selling price:";
    cin>>sp;
    if(sp>cp)
    {
        p=sp-cp;
        cout<<"seller made a profit of :"<<p;
    }
    else 
    {
        l=cp-sp;
        cout<<"seller made a loss of :"<<l;
    }
}

    
