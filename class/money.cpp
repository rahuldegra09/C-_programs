#include<bits/stdc++.h>
using namespace std;
class money
{
    public:int rs,paisa;
    public:
    money();
    money(int r ,int p);
    money(const money &m);
    void show();
    void read();
    money operator+ (money&m);
    money operator-(money &m);
    money operator*(int n);
    money operator++();
    money operator++(int);
    money operator--();
    money operator--(int);
    bool operator>(money &m);
    bool operator==(money &m);
    operator int();
    operator float();
    friend ostream& operator << (ostream &os,money &m);
    friend istream& operator >>(istream &is, money &m);
    void operator=(const money &m);
};
money::money()
{
    rs=0;
    paisa=0;
}
money::money(int r, int p)
{
    rs=r;
    paisa=p;
}
money::money(const money &m)
{
    rs=m.rs;
    paisa=m.paisa;
}
money money::operator++()
{
    money temp;
    rs++;
    temp.rs=rs;
    temp.paisa=paisa;
    return temp;
}
money money::operator++(int x)
{
    money temp;
    temp.rs = rs;
    temp.paisa = paisa;
    rs++;
    return temp;
}
money money::operator--()
{
    money temp;
    if(rs!=0)
    rs--;
    temp.rs = rs;
    temp.paisa = paisa;
    return temp;
}
money money::operator--(int x)
{
    money temp;
    temp.rs = rs;
    temp.paisa = paisa;
    if (rs != 0)
    rs--;
    return temp;
}
money money::operator+(money &m)
{
        money temp;
        temp.rs = rs + m.rs;
        temp.paisa = paisa + m.paisa;
        if (temp.paisa >= 100)
        {
            temp.rs++;
            temp.paisa = temp.paisa % 100;
        }
        return temp;
 }
    money money::operator-(money &m)
    {
        money temp;
        int m1, m2, m3;
        m1 = rs * 100 + paisa;
        m2 = m.rs * 100 + m.paisa;
        if (m1 > m2)
            m3 = m1 - m2;
        else
            m3 = m2 - m1;
        temp.rs = m3 / 100;
        temp.paisa = m3 % 100;
        return temp;
    }
    money money::operator*(int n)
    {
        money temp;
        temp.rs = rs * n;
        temp.paisa = paisa * n;
        if (temp.paisa >= 100)
        {
            temp.rs = temp.rs + (temp.paisa / 100);
            temp.paisa %= 100;
        }
        return temp;
    }
    bool money::operator>(money &m)
    {
        int m1,m2;
        m1=rs*100+paisa;
        m2=m.rs*100+m.paisa;
        if(m1>m2)
            return true;
        else
            return false;
    }
    bool money::operator==(money &m)
    {
        int m1, m2;
        m1 = rs * 100 + paisa;
        m2 = m.rs * 100 + m.paisa;
        return m1==m2;
    }
    money::operator int()
    {
        int res;
        res=rs*100+paisa;
        return res;
    }
    money::operator float()
    {
        float res;
        res = rs * 100 + paisa;
        res/=100;
        return res;
    }
    void money::operator=(const money &m)
    {
        rs=m.rs;
        paisa=m.paisa;
    }
    void money ::read()
    {
        cout << "enter the amount rs and paisa:";
        cin >> rs >> paisa;
    }
    void money ::show()
    {
        cout << rs << "." << paisa;
    }
    ostream &operator<<(ostream &os, money &m)
    {
        os<<m.rs<<"."<<m.paisa;
        return os;
    }
    istream &operator>>(istream &is, money &m)
    {
        is>>m.rs>>m.paisa;
        return is;
    }
        int main()
        {
            money p1, p2, p3, p4(9, 0),p5;

            cout << "enter an amounr:";
            cin>>p1;
            cout << "enter another amount:";
            cin>>p2;
            p3 = p1++;
            cout << "\np1 is:";
            cout<<p1;
            cout << "\np3 is:";
            cout<<p3;
            if (p1 > p2)
            {
                cout << "\nfirst amount is greater";
            }
            else
                cout << "\nsecond amount is greater";

            if (p1 == p4)
            {
                cout << "\n both amounts are equal";
            }
            int a;
            a = p1;
            cout << "\na=" << a;
            float b;
            b = p1;
            cout << "\nb=" << b;
            p5=p1;
            cout<<"\n"<<p5;
        }