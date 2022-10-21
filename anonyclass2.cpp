
#include <iostream>
using namespace std;

class
{
	int i;
public:
	void setData(int i)
	{
		// this pointer is used to differentiate
		// between data member and formal argument.
		this->i = i;
	}
	void print()
	{
		cout << "Value for i : " << this->i << endl;
	}
	
} obj1, obj2; 

int main()
{
	obj1.setData(10);
	obj1.print();

	obj2.setData(20);
	obj2.print();
	return 0;
}
