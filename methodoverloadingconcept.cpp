#include<iostream>
using namespace std;

void fun(int i)
{
	cout << "Number = " << i << endl;
}
void fun(float j)
{
	cout << "Number = " << j << endl;
}

int main()
{
	fun(30);
	fun(11.2);
	
	return 0;
}
