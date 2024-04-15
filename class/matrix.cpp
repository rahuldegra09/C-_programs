#include<iostream>
using namespace std;
class matrix
{
    public :int row, column;
            int arr[50][50];
    public: matrix();
            matrix(int r,int c);
            matrix(matrix &m);
            void show();
            void read();
            matrix operator+(matrix &m);
            matrix operator-(matrix &m);
            matrix operator*(matrix &m);
            matrix operator++();
            matrix operator--();
            bool operator==(matrix &m);
            bool operator!=(matrix &m);
            friend ostream &operator<<(ostream &os, matrix &m);
            friend istream &operator>>(istream &is, matrix &m);
            void operator=(const matrix &m);
};
matrix::matrix()
{
    row=3;
    column=3;
}
matrix::matrix (int r,int c)
{
    row=r;
    column=c;
}
matrix::matrix(matrix  &m)
{
    row=m.row;
    column=m.column;
}
matrix matrix::operator+(matrix &m)
{
    matrix temp;
    if (row==m.row&&column==m.column)
    {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            temp.arr[i][j]=arr[i][j]+m.arr[i][j];
        }
    }
    }
    else
    {
        cout << "matrix are different:";
        exit(1);
    }
    return temp;
}
matrix matrix::operator-(matrix &m)
{
    matrix temp;
    if (row == m.row && column == m.column)
    {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            temp.arr[i][j] = arr[i][j] - m.arr[i][j];
        }
    }
    }
    else 
    {
        cout<<"matrix are different:";
        exit(1);
    }
    return temp;
}
matrix matrix::operator* ( matrix &m)
{
    matrix temp;
    if (column==m.row)
    {
        temp.row=row;
        temp.column=m.column;
        for(int i = 0; i < row; i++)
        {
            for (int j = 0; j < m.column; j++)
            {
                for (int k = 0; k < column; k++)
                {
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
                }
            }
        }
    }
    else {
        cout<<"invalid matrix-------->";
        exit(0);
    }
    return temp;
}
matrix matrix::operator++()
{
    matrix temp;
    temp.row=row;
    temp.column=column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            temp.arr[i][j] = arr[i][j]+1;
        }
    }
    return temp;
}
matrix matrix::operator--()
{
    matrix temp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            temp.arr[i][j] = arr[i][j]-1;
        }
    }
    return temp;
}
bool matrix::operator ==(matrix &m)
{
    if (row!=m.row||column!=m.column)
    {
        return false;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != m.arr[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
bool matrix::operator!=(matrix &m)
{
    if (row != m.row || column != m.column)
    {
        return true;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != m.arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
ostream &operator<<(ostream &os, matrix &m)
{
    os<<"the matrix is:"<<endl;
    for (int i = 0; i < m.row; i++)
        {
            for (int j = 0; j < m.column; j++)
            {
                os << m.arr[i][j];
                os<<" ";
            }
                os << endl;
        }
        return os;
}
istream &operator>>(istream &is, matrix &m)
{
    cout<<"enter the elements:";
        for (int i = 0; i < m.row; i++)
        {
                for (int j = 0; j < m.column; j++)
                {
                is >> m.arr[i][j];
                }
        }
                return is;
}
void matrix::operator=(const matrix &m)
{
        row=m.row;
        column=m.column;
}
void matrix::read()
{
    cout<<"enter the elements:";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void matrix::show()
{
    cout << "the matrix is :"<<endl; 
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix m1(2,2),m2(2,2),m3;
    cin>>m2;
    m1 = ++m2;
    cout<<"M1: "<<endl;
    m1.show();
    cout<<"M2: "<<endl;
    m2.show();
}