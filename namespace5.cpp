#include <iostream>
using namespace std;

namespace add
{
    int x = 5;
    int y = 10;
    int add() { return x + y; }
}

namespace diff
{
    int x = 15;
    int y = 9;
    int diff() { return x - y; }

}

namespace multiply
{
    int x = 10;
    int y = 10;
    int mul() { return x * y; }

}

namespace division
{
    int x = 56;
    int y = 2;
    int div() { return x / y; }

}

int main()
{
    {
        using namespace add;
        cout << x + y << '\n';
        cout << x+2+y << '\n';
    }
    {
        using namespace diff;
        cout << x - y << '\n';
    }
    {
        using namespace multiply;
        cout << x * y << '\n';
    }
    {
        using namespace division;
        cout << x / y << '\n';
    }
}