// Diamond

#include <iostream>

using namespace std;
class Base_class
{
public:
    int x;
};

// class 1
class class_1 : public Base_class
{
public:
    int y;
};

// class 2
class class_2 : public Base_class
{
public:
    int z;
};

// derived class 3

class derived_class : public class_1, public class_2
{
public:
    int sum;
};

int main()
{
    // create an object of the derived_class
    derived_class obj;
    // obj.x = 10; //ambigous
    obj.class_1::x = 10;
    obj.y = 20;
    obj.z = 30;
    // obj.sum = obj.x + obj.y + obj.z;
    cout << "The sum is: " << obj.sum << "\n\n";
    return 0;
}
