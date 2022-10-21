#include<iostream>

using namespace std;

class Base{
        public:
        void Display(){
            cout<< "Display of Base"<< endl;
        }
};

class Derived1: public Base
{
    public:
    void Display(){
        cout<<"Display of Derived 1"<< endl;
    }
};

class Derived2: public Base
{
    public:
    void Display(){
        cout<<"Display of Derived 2"<<endl;
    }
};



int main()
{
    Base *p = new Derived1();
    p->Display();

    Base *q = new Derived2();
    q->Display();
}