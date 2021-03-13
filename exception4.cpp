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
			throw 20.1;
		else if(i==2)
		 	throw "XYZ";
		else if(i==3)
		 	throw 100;
	}
	catch(...)
	{
		cout << "Exception! Try new value" << endl;
	}
	
	return 0;
}
