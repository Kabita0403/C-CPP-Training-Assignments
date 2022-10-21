#include <iostream>
using namespace std;

int main()
{
    int var = 0;

    cout << "Simple C++ Program for Catch All or Default Exception Handling\n";
    // try block - for exception code
    try
    {
        // Inside try block
        if (var == 0)
        {
            throw var;
            // Skip all code after throw
        }
    } // catch block
    catch (float ex)
    {
        // Code executed when exception Catch with float type
        cout << "Float Exception catch : Value :" << ex;
    }
    catch (...)
    {
        // Code executed when exception Catch : for default
        cout << "Default Exception Catch";
    }
    return 0;
}