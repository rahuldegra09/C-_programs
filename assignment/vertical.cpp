#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, j,max,m;
    cout << "Enter Size of Array" << endl;
    cin >> n;
    cout << "Enter Array Elemnts" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    m = max;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            if (a[j] < max)
                cout <<" ";
            else
                cout <<"*";
            max--;
            cout << endl;
    }
}