#include<iostream>
using namespace std;
class employee
{
    public: string name,surname;
            int salary;
    public : employee();
             employee(string nm,string sn,int s);
             employee(employee &m);
             bool  operator==(employee &e);
             void show();
             void read();
             friend ostream &operator<<(ostream &os, employee &e);
             friend istream &operator>>(istream &is, employee &e);
             void operator=(const employee &e);
};
employee::employee()
{
    name="unknown";
    surname="unknown";
    salary=0;
}
employee::employee(string nm, string sn, int s)
{
    name=nm;
    surname=sn;
    salary=s;
}
employee::employee(employee &e)
{
    name=e.name;
    surname=e.surname;
    salary=e.salary;
}
bool employee::operator==(employee &e)
{
    if((name==e.name)&&(surname==e.surname)&&(salary==e.salary))
        return true;
    else 
    return false;

}
void employee::read()
{
    cout<<"enter the employye details:"<<endl;
    cout<<"enter the employee name:";
    cin>>name;
    cout<<"enter the surename of employee:";
    cin>>surname;
    cout<<"enter the employee salary:";
    cin>>salary;
}
void employee::show()
{
    cout<<"name: "<<name<<"\t"<<"surname: "<<surname<<"\t"<<"slaray: "<<salary;
}
ostream &operator<<(ostream &os, employee &e)
{
    os << e.name <<"\t" << e.surname <<"\t"<<e.salary;
    return os;
}
istream &operator>>(istream &is, employee &e)
{
    cout << "enter the employye details:" << endl;
    cout << "enter the employee name:";
    is >> e.name;
    cout << "enter the surename of employee:";
    is >> e.surname;
    cout << "enter the employee salary:";
    is >> e.salary;
    return is;
}
void employee::operator=(const employee &e)
{
    name =e.name;
    surname = e.surname;
    salary=e.salary;
}
int main()
{
    employee e1,e2,e3,e4;
    cin>>e1;
    cout<<e1;
}
