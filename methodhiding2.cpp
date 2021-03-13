#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{
			cout << "Value = 0" << endl;
		}
};

class B:public A
{
	public:
		void fun(int a)
		{
			cout << "Value = " << a << endl;
		}
};

int main()
{
	B obj;
//	obj.fun();
	obj.fun(50);
	
	return 0;
}
