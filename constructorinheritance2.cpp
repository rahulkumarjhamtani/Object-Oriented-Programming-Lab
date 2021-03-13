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
		B(int y)
		{
			b=y;
			cout << "b = " << b << endl;
		}
};

int main()
{
	B obj(5);
	return 0;
}
