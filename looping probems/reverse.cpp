#include<iostream>
using namespace std;
int main()
{
    int n,num,rev=0,rem;
    cout<<"enter the number:";
    cin>>num;
    n=num;
    do
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }while(num!=0);
    cout<<"reverse is:"<<rev;

    
}