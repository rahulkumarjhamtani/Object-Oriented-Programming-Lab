#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr = new int;
	*ptr = 12;
	cout << "The value inside the new block referred by ptr - " << *ptr << endl;
	float *ptr1;
	ptr1 = new float;
	*ptr1 = 22.75;
	cout << "The value inside the new block referred by ptr1 - " << *ptr1 << endl;
	
	delete ptr;
	delete ptr1;
	
	return 0;
}
