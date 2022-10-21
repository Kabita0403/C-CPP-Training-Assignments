#include <iostream>
using namespace std;

namespace first
{
    void func()
    {
        cout << "first" << endl;
    }

    namespace second
    {
        void func()
        {
            cout << "Second" << endl;
        }
    }
}

using namespace first::second;

int main()
{

    //first::func();
    func();

    return 0;
}