#include<iostream>
using namespace std;
class rational
{
    public:int numerator,denomerator;
    public:
        rational();
        rational(int n, int d);
        rational(rational &r);
        void read();
        void show();
        rational operator+(rational &r);
        rational operator-(rational &r);
        rational operator*(int x);
        rational operator*(rational &r);
        rational operator/(rational &r);
        rational operator/(int y);
        rational operator++();
        rational operator--();
        bool operator>(rational &r);
        bool operator<(rational &r);
        bool operator==(rational &r);
        operator float();
        operator int();
        friend ostream &operator<<(ostream &os, rational &m);
        friend istream &operator>>(istream &is, rational &m);
        void operator=(const rational &m);
};
rational::rational()
{
    numerator=0;
    denomerator=0;
}
rational::rational(int n,int d)
{
    numerator=n;
    denomerator=d;
}
rational::rational(rational &r)
{
    numerator = r.numerator;
    denomerator = r.denomerator;
}
void rational::read() 
{
    cout<<"enter the numerator and denomerator:";
    cin>>numerator>>denomerator;
}
void rational::show()
{
    cout <<numerator<<"/"<<denomerator;
}
rational rational::operator+(rational &r)
{
    rational temp;
    temp.numerator=(numerator*r.denomerator)+(r.numerator*denomerator);
    temp.denomerator=r.denomerator*denomerator;
    return temp;
}
rational rational::operator-(rational &r)
{
    rational temp;
    temp.numerator = (numerator * r.denomerator) - (r.numerator * denomerator);
    temp.denomerator = r.denomerator * denomerator;
    return temp;
}
rational rational::operator*(int x)
{
    rational temp;
    temp.numerator = numerator*x;
    temp.denomerator = x * denomerator;
    return temp;
}
rational rational::operator*(rational &r)
{
    rational temp;
    temp.numerator = numerator * r.numerator;
    temp.denomerator = denomerator * r.denomerator;
    return temp;
}
rational rational::operator/(rational &r)
    {
        rational temp;
        temp.numerator = numerator * r.denomerator;
        temp.denomerator = denomerator * r.numerator;
        return temp;
    }
rational rational::operator/(int y)
    {
        rational temp;
        temp.numerator = numerator * 1;
        temp.denomerator = denomerator * y;
        return temp;
    }
rational rational::operator++()
    {
        rational temp;
        temp.numerator = numerator + denomerator;
        temp.denomerator = denomerator * 1;
        return temp;
    }
rational rational::operator--()
    {
        rational temp;
        temp.numerator = numerator - denomerator;
        temp.denomerator = denomerator * 1;
        return temp;
    }
 bool rational::operator<(rational &r)
    {
        int temp, des;
        temp = r.numerator / r.denomerator;
        des = numerator / denomerator;
        if (des < temp)
            return true;
        else
            return false;
    }
bool rational::operator>(rational &r)
    {
        int temp, des;
        temp = r.numerator / r.denomerator;
        des = numerator / denomerator;
        if (des > temp)
            return true;
        else
            return false;
    }
bool rational::operator==(rational &r)
    {
        int temp, des;
        temp = r.numerator / r.denomerator;
        des = numerator / denomerator;
        if(des==des)
        return true;
        else
            return false;
    }
rational::operator float()
    {
        float temp;
        temp = numerator / denomerator;
        temp /= 100;
        return temp;
    }
rational::operator int()
    {
        int coma;
        coma = numerator / denomerator;
        return coma;
    }
ostream &operator<<(ostream &os, rational &m)
    {
        os << m.numerator << "." << m.denomerator;
        return os;
    }
istream &operator>>(istream &is, rational &m)
    {
        is >> m.numerator >> m.denomerator;
        return is;
    }
void rational::operator=(const rational &r)
    {
        numerator = r.numerator;
        denomerator = r.denomerator;
    }
    int main()
    {
        rational r1, r2, r3;
        r1.read();
        r2.read();
        r2 = r1 * 4;
        r2 = r1;
        r2.show();
        if (r1 == r2)
        {
            cout << "\nhi";
        }
    }
