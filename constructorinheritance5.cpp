#include<iostream>
using namespace std;

class A
{
	private:
		int a;
	public:
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
		B(int y):A()		//calling of parameterized constructor of base class
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
