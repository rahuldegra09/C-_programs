#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character :";
    cin>>ch;
    if(ch>=65 && ch<=90)
        cout<<"entered character is capital letter";
    else if(ch>=97 && ch<=122)
        cout<<"entered character is small letter";
    else if (ch>=48 && ch<=57)
        cout<<"entered character is a digit";
    else if((ch>0 && ch<=47)||(ch>=58 && ch<=64)||
               (ch>=91 && ch<=96)||(ch>=123 && ch<=127))
		cout<<"Character is a special symbol";
}