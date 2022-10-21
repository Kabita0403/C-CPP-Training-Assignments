#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};
class derived:public base{
    public:
    derived()
    {
        cout<<"derived class"<<endl;
    }
    ~derived()
    {
        cout<<"derived class constructor"<<endl;
    }
};
int main()
{
    base *p = new derived();
    delete p;
    //derived d;
    return 0;
}