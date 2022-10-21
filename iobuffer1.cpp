

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a;
	char s[100];
	
    cout<<"Enter a number: ";
	cin >> a;
	
	cin.sync();
	
    cout<<"Enter a String: ";
	cin.getline(s,100);
	
	
	cout << a << endl;
	cout << s << endl;

	return 0;
}
