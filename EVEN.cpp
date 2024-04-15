#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter the number";
    cin>>no;
    if (no==0)
        cout<<"entered no. is 0";
    else if (no%2==0)
        cout<<"Number is EVEN";
    else
        cout<<"number is ODD";
    return 0;
}
