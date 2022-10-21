#include <iostream>

using namespace std;

int main()
{
    int Size, i, a[10], b[10];
    int Addition[10], Subtraction[10], Multiplication[10];

    cout << "\nEnter the Size of the Array: \n";
    cin >> Size;

    cout << "\nEnter the First Array Elements: \n";
    for (i = 0; i < Size; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter the Second Array Elements: \n";
    for (i = 0; i < Size; i++)
    {
        cin >> b[i];
    }

    for (i = 0; i < Size; i++)
    {
        Addition[i] = a[i] + b[i];
        Subtraction[i] = a[i] - b[i];
        Multiplication[i] = a[i] * b[i];
    }

    for (i = 0; i < Size; i++)
    {
        cout<<"Addition is: "<<Addition[i];
        cout<< endl;
        cout<<"Subtraction is: "<<Subtraction[i];
        cout<< endl;
        cout<<"Multiplication is: "<<Multiplication[i];
        cout<< endl;
        
    }

}
