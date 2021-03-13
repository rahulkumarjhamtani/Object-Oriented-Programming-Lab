#include<iostream>
using namespace std;

class base
{
	protected:
		int a,b;
	public:
		void input()
		{
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;	
		}	
};

class sum:public base
{
	private:
		int sum;
	public:
		void show1()
		{
			sum=a+b;
			cout << "Addition : " << sum << endl;
		}
};

class multiply:public base
{
	private:
		int mul;
	public:
		void show2()
		{
			mul=a*b;
			cout << "Multiplication : " << mul << endl;
		}
};

int main()
{
	sum obj1;
	multiply obj2;
	
	obj1.input();
	obj1.show1();
	
	obj2.input();
	obj2.show2();
	
	return 0;
}
