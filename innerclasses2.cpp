#include<iostream>
using namespace std;

class A {
    public:
     class B { };
     B *z;

     class C: private B {
        public:
        void fun(){
            cout<<"hshabdh"<<endl;
        }
            B y;
                A::B y2;
            C *x;
                A::C *x2;
       
     };
};

int main(){
    A::C aa;
    aa.fun();
}