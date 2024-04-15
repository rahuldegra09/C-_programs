#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,s,ar;
    cout<<"enter the sides of triangle:";
    cin>>a>>b>>c;
    if((a+b)>c)
    {
         if((b+c)>a)
         {
            if ((c+a)>b)
            {

               cout<<"triangle is valid";
               s= (a+b+c)/2;
               ar=sqrt(s*(s-a)*(s-b)*(s-c));
               cout<<"Area of triangle is:"<<ar;
            }
         }
    }
    else 
        cout<<"traingle is not valid";
    

}
        
