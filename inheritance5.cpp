// Hybrid Inheritance

#include <iostream>

using namespace std;

class world
{
public:
    world()
    {
        cout << "This is world!!\n";
    }
};

// here is single Inheritance
class continent : public world
{
public:
    continent()
    {
        cout << "This is Continent!!\n";
    }
};

class country
{
public:
    country()
    {
        cout << "This is Country!!\n";
    }
};

// here is multiple inheritance

class India : public continent, public country
{
public:
    India()
    {
        cout << "This is India!! I love my India\n";
    }
};

int main()
{
    India myworld;
    return 0;
}