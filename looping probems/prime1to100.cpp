#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    for(n=1;n<=100;n++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count<1)
            cout<<"\nprime no are"<<n;
    
        }
}
