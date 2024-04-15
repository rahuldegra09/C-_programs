#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max,min;
    cout<<"enter three interger values ";
    cin>>a>>b>>c;
    if (a>b)
    {
         max=a;
         min=b;
    }
    else
    {
         max=b;
         min=a;
    }
    if (c>max)
        max=c;
     else
          if(c<min)
               min=c;
        cout<<"max is:"<<max;
        cout<<"min is:"<<min;
        
        return 0;
}
