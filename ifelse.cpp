#include <iostream>
using namespace std;

int main() 
{

  int num;

  cout << "Enter an integer: ";
  cin >> num;

  if (num >= 0) {
    cout << "positive integer: " << num << endl;
  }
  else {
    cout << "Negative integer: " << num << endl;
  }

  return 0;
}