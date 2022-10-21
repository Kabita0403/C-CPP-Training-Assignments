

#include <iostream>
using namespace std;

int main() 
{

  int num;

  cout << "Enter an integer: ";
  cin >> num;

  if (num > 0) 
  {
    cout << "positive integer: " << num << endl;
  } 
  else if (num < 0) 
  {
    cout << "negative integer: " << num << endl;
  } 
  else 
  {
    cout << "You entered 0." << endl;
  }

  return 0;
}