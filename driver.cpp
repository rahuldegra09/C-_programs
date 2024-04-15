#include<iostream>
using namespace std;
int main()
{
    int age;
    char sex,ch,ms;
    cout<<"enter the marital status(y/n):";
    cin>>ms;
    if(ms=='y')
        cout<<"\ndriver is to be insured";
    else 
        if(ms=='n')
        {
            cout<<"\nenter the age:";
            cin>>age;   
            cout<<"\nenter the sex(m/f):";
            cin>>sex;
            if((age>30 && sex=='m'))
                cout<<"\ndriver is to be insured";
            else 
                if((sex=='f')&&(age>25))
                    cout<<"\ndriver is to be insured";
                else
                    cout<<"\ndriver is not insured";
        }
}