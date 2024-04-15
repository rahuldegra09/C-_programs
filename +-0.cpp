#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter a number:";
    cin>>no;
    if(no==0)
        cout<<"entered no is 0";
    else if(no>0)
        cout<<"entered number is positive";
    else 
        cout<<"entered number is negative";
        return 0;
}

