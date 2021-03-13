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
		~A()
		{
			cout << "Destructor of Parent class" << endl;
		}
};

class B:public A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
			cout << "b = " << b << endl;
		}
		~B()
		{
			cout << "Destructor of Child class" << endl;
		}
};

int main()
{
	B obj(5,8);
	
	return 0;
}
