#include<iostream>
using namespace std;

int main()
{
	int i;
	cout << "i = ";
	cin >> i;
	try
	{
		if(i==1)
			throw 20;
		else if(i==2)
		 	throw 40;
		else if(i==3)
		 	throw 100;
	}
	catch(int e)
	{
		cout << "Exception number = " << e << endl;
	}
	
	cout << "Last line of program." << endl;
	
	return 0;
}
