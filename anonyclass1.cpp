
#include <iostream>
using namespace std;

class
{
	int i;
public:
	void setData(int i)
	{
		this->i = i;
	}
	void print()
	{
		cout << "Value for i : " << this->i << endl;
	}
	
} obj1;	 

int main()
{
	obj1.setData(10);
	obj1.print();
	return 0;
}
