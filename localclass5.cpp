#include<iostream>
using namespace std;
int x=10;
void fun()
{
    static int x=20;
    class Test1{
        public:
        Test1(){
            cout<<"Test: "<<"\n";
            cout<<::x;
            cout<<" "<<x<<"\n";
        }
    };
    class Test2:public Test1{
        //Test t1;
        public:
        void method(){
            cout<<"x= "<<::x<<"\n";
        }
    };
    Test2 t;
    t.method();
}

int main(){
    system("CLS");
    fun();
}

