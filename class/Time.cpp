#include<bits/stdc++.h>
using namespace std;
class Time {
    private:
        int hh, mm, ss;
        bool format12, am;
    public:
        Time();
        Time(int h, int m, int s, bool a);
        Time(int h, int m, int s);
        Time(const Time &t);
        void show();
        void operator=(const Time &t);
        void convertTo12();
        void convertTo24();
};
Time::Time()
{
    hh = 00;
    ss = 00;
    ss=00;
}
Time::Time(int h, int m,int s)
{
    hh = h;
    mm = m;
    ss=s;
}
Time::Time(const Time &t)
{
    hh = t.hh;
    mm = t.mm;
    ss=t.ss;
}
void Time::convertTo24()
{
    Time temp;
    if(hh>12)
    {
        cout<<"\nalready in 24 hh formate---->";
        exit(0);
    }
    else
    {
        hh=hh+12;
        if(hh==24)
        {
            hh=0;
        }
    }
}
void Time::convertTo12()
{
    if(hh<12)
    {
        cout<<"allready in 12 format:------->";
        exit(0);
    }
    else
    {
        hh=hh-12;
        if(hh==0)
        {
            hh=12;
        }
    }
}
void Time::show()
{
    if(ss>59)
    {
        mm++;
        ss=ss-60;
    }
    if (mm>59)
    {
        hh++;
        mm=mm-60;
    }
        cout << "Time is:" << hh << ":" << mm<<":"<<ss;
}
void Time::operator=(const Time &t) 
{
    hh=t.hh;
    mm=t.mm;
    ss=t.ss;
}
int main()
{
    Time t1,t2;
    t1.show();
}