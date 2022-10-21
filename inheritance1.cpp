//Single Level Inheritance

#include<iostream>

using namespace std;

class Base {
    public:
    float salary = 1000;
};

class Derived: public Base {
    public:
     float bonus = 200;
     void sum()  {
        cout<< "Your Total Salary is: "<< salary + bonus;
     }
};
int main() {
    Derived x;
    cout << "Your Salary is:" << x.salary << endl;
    cout << "Your Bonus is:" << x.bonus << endl;
    x.sum();
    return 0;
}