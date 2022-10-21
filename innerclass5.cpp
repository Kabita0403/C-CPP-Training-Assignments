#include<iostream>
using namespace std;

class A{
    public:
    int n,m;
    A(): n(10), m(20){}
};

int main(){
    A a;
    cout<< a.n<<endl;
    cout<<a.m<<endl;
}