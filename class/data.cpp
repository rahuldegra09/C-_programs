#include <iostream>
using namespace std;
class data
{
    private:int x;
    public: data(int a=0);
    void set_data(int y);
    void show();
};
data::data(int a)
{
    this->x=a;
}
void data::set_data(int y)
{
    this->x=y;
}
void data::show()
{
    cout<<"x:"<<x<<endl;
}
int main()
{
    data d1,d2;
    cout<<"data is:";
    d1.show();
    d2.show();
    d1.set_data(50);
    cout<<"now data is:";
    d1.show();
}