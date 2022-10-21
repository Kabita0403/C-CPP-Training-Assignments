#include<iostream>
using namespace std;


class A{
    friend class B;
    int a;
};

class B { };

class C : public B {
    void f(A* p) {
        //Following is error
        //p->a = 2; 
    }
};

int main()
{
    return 0;
}