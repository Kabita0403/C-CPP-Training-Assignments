#include<iostream>
using namespace std;

class rectangle{

    private:
            int l,b;
            rectangle(){
                    l=10;
                    b=20;
                    cout<<"created\n";

        }

    public:
    void display(){

        cout<<"\nArea:"<<l*b<<endl;
    }
    static void fun(){
        rectangle r;
        r.display();
        cout<<"hello";
    }
};
int main(){
    rectangle::fun();
    return 0;
}