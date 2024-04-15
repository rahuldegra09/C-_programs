#include<iostream>
using namespace std;
int main()
{
    double bs,da,x,y;
    cout<<("enter the basic salary");
    cin>>bs;
    if(bs<=3500)
       da=(159/100.0)*bs;

    else if(bs>3500 && bs<=6000)
    {
        x=(159/100.0)*3500;
        y=(119/100.0)*bs;
        if(x>y)
            da=x;
        else 
            da=y;
    }
    else
    {
        x=(119/100.0)*6000;
        y=(103/100.0)*bs;
        if(x>y)
            da=x;
        else 
            da=y;
    }
    
    cout<<"DA IS: "<<da;
        
        return 0;
}