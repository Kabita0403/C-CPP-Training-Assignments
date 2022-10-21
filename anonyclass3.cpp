#include<iostream>
using namespace std;

typedef class
{
	int i;
public:
	void setData(int i)
	{

		this->i = i;
	}
	void print()
	{
		cout << "Value for i :" << this->i << endl;
	}
	
} myClass;	 

int main()
{
	myClass obj1, obj2;
	obj1.setData(10);
	obj1.print();

	obj2.setData(20);
	obj2.print();
	return 0;
}
