#include <iostream>
using namespace std;
int main()
{
    int no, i, max = 0, count = 0, temp = 0;
    cout << "the numbers are :";
    for (i = 0; i < 10; i++)
    {
        cin >> no;
        if (no > max)
        {
            count++;
        
            if (count>temp)
            temp = count;
        }
        else
        {
          count=1; 
        }
        max=no;
    }
    cout<<"longest series is :"<<temp;
}
