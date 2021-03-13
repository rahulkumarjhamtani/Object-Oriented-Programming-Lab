#include<iostream>
using namespace std;

int main()
{
	cout << "Hii Today is Monday" << endl;
	try
	{
		throw 20.1;
		cout << "Try block" << endl;
	}
	catch(int e)
	{
		cout << "Exception number = " << e << endl;
	}
	catch(double e)
	{
		cout << "Exception number = " << e << endl;
	}
	cout << "Last line of program." << endl;
	
	return 0;
}
