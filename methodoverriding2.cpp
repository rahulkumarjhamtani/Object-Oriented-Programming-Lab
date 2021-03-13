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
		void fun1()			//method overriding when child class having same name and arguments same as the parent class
		{
			cout << "Funtion of Child Class." << endl;
		}
};

int main()
{
	B obj;
	obj.fun1();
	obj.fun();
		
	return 0;
}
