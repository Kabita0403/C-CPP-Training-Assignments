//Exception Handling with Multiple Catch

#include<iostream>
#include<conio.h>
using namespace std;

void test(int x) {
    try {
        if (x > 0)
            throw x;
        else
            throw 'x';
    } catch (int x) {
        cout << "\nCatch a integer and that integer is:" << x;
    } catch (char x) {
        cout << "\nCatch a character and that character is:" << x;
    }
}

int main() {
    
    cout << "Testing multiple catches:\n";
    test(10);
    test(0);
    //getch();
    return 0;
}