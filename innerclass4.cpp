#include<iostream>
using namespace std;

class A{
    public:
    class B{
        public:
        void fun(){
            cout<<"Hi";
        }
    };
    class C : public B{
        public:
        void fun(){
            cout<<"Bye";
        }
    };
};

int main(){
    A::B *c = new A::C{};
      c->fun();
}