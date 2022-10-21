//Multiple Inheritance

#include<iostream>

using namespace std;

class Base1 {
    public:
    float salary = 1500;
};

class Base2 {
    public:
    float bonus = 500;
};

class Derived: public Base1, public Base2 {
    public:
    void sum(){
        cout<< "Your Total Salary is: "<< salary + bonus;
    }
};

int main()
{
    Derived x;
    cout << "Your Salary is:" << x.salary << endl;
    cout << "Your Bonus is:" << x.bonus << endl;
    x.sum();
    return 0;
}