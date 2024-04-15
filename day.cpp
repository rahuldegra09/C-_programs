#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter the number:";
    cin>>no;
    switch(no)
    {
                case 1:
                {
                    cout<<"days in january is :31";
                    break;
                }
                case 2:
                {
                    cout<<"days in february is : 28";
                    break;
                }
                case 3:
                {
                    cout<<"days in march is : 31";
                    break;
                }
                case 4:
                  {
                    cout<<"days in april is: 30";
                    break;
                  }
                case 5:
                {
                    cout<<"days in may is : 31 ";
                    break;
                }
                case 6:
                {
                    cout<<"days in june is : 30";
                    break;
                }
                case 7:
                {
                    cout<<"days in july is : 31";
                    break; 
                }
                case 8:
                {
                        cout<<"days in august is : 31";
                    break; 
                }
                case 9:
                {
                    cout<<"days in september is :30";
                    break;
                }
                case 10:
                {
                    cout<<"days in october is : 31";
                    break;
                }
                case 11:
                {
                    cout<<"days in november is : 30";
                    break;
                }
                case 12:
                {
                    cout<<"days in december is : 31";
                    break;
                }
                default:
                    cout<<"invalid input";
    }
}