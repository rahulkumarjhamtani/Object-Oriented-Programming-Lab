#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{
			cout << "Funtion of Parent Class." << endl;
		}
};

class B:public A
{
	public:
		void fun(int a)			//method hiding is to implement method overloading in inheritance
		{
			cout << "a = " << a << endl;
		}
};

int main()
{
	B obj;
//	obj.fun();			//method hiding
	obj.fun(3);
	
	return 0;
}
