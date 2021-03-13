#include<iostream>
using namespace std;

void fun(void);
int main()
{
	int i = 3;
	cout << "Hii Today is Monday" << endl;
	try
	{
		if(i==3)
			fun();
	}
	catch(int e)
	{
		cout << "Exception = " << e << endl;
	}
	
	cout << "Last line of program." << endl;
	
	return 0;
}

void fun()
{
	throw 100;
}
