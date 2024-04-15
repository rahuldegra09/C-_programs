#include <iostream>
using namespace std;
class library
{
    public:virtual void read()=0;
            virtual void show()=0;
};
class book :public library
{
    public :string str,ath,pub;
            void read()
            {
                cout << "enter the book title:";
                 cin >>str;
                 cout << "enter the author name :";
                 cin>>ath;
                 cout << "enter the publication:";
                 cin>>pub;
            }
            void show()
            {
                cout<<"book :"<<str<<"-"<<"author :"<<ath<<"-"<<"publication :"<<pub<<endl;
            }
};
class dvd:public library
{
    public:string tit,name,cat;
            void read()
            {
                cout<<"enter the movie title:";
                cin>>tit;
                cout<<"enter the director name :";
                cin>>name;
                cout<<"enter the category :";
                cin>>cat;
            }
            void show()
            {
                cout << "\ndvd :" << tit << "-"<< "author :" << name << "-"<< "publication :" << cat<<endl;
            }
};
int main()
{
    library* arr[5];
    char str;
    for (int i = 0; i < 2; i++)
    {
                cout<<"enter book or dvd:";
                cin>>str;
                if (str == 'b')
                {
                    arr[i] = new book();
                    arr[i]->read();
                }
                else
                {
                    arr[i] = new dvd();
                    arr[i]->read();
                }
    }
                for (int i = 0; i < 2; i++)
                {
                    arr[i]->show();
                }
}