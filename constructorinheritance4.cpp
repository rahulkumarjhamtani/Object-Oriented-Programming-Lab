#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
		A()
		{
			cout << "Hello World" << endl;
		}
		A(int k)
		{
			a=k;
			cout << "a = " << a << endl;
		}
};

class B:public A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)		//calling of parameterized constructor of base class
		{
			b=y;
			cout << "b = " << b << endl;
		}
};

int main()
{
	B obj(5,8);
	return 0;
}
