#include<iostream>

using namespace std;

class Test
{
    int *p;
    public:
    Test()
    {
        p = new int[10];
        cout<<"Test created"<< endl;
    }
    ~Test()
    {
        delete[]p;
        cout<<"Test Deleted"<< endl;
    }
};


void fun()
{
    Test *t = new Test();
    delete t;
}

int main()
{
    fun();
    return 0;
}