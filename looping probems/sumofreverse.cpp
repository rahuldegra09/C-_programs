#include<iostream>
using namespace std;
int main()
{
    int n,num,sum=0,rem;
    cout<<"enter the number:";
    cin>>num;
    n=num;
    do
    {
        rem=num%10;
        sum=(sum)+rem;
        num=num/10;
    }while(num!=0);
    cout<<"sum is:"<<sum;

    
}