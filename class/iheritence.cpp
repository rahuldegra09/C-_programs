#include <iostream>
using namespace std;
class A
{
    public :void show()
    {
        cout<<"show from a";
    }
};
class B:virtual public A{};
class C:virtual public A {};
class D:public B,public C{}; 
int main()
{
    D dobj;
    dobj.show();
}