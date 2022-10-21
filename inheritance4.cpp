#include<iostream>

using namespace std;

class Single_base_class {
    public:
    int x, y;
    void data(){
        cout <<"\nEnter the value of x and y ->\n";
        cin >> x >> y;
    }
};

//class Derived1 is derived from Singl_base_class
class Derived1: public Single_base_class {
    public:
      void product() {
        cout <<"\n The Product is= "<< x*y;
      }
};

class Derived2: public Single_base_class {
    public:
      void sum() {
        cout <<"\n The sum is= "<< x+y;
      }
};

int main()
{
    Derived1 obj1;
    Derived2 obj2;
    obj1.data();
    obj1.product();
    obj2.data();
    obj2.sum();
    return 0;
}

