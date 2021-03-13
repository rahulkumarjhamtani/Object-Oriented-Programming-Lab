#include<iostream>
#include<math.h>
using namespace std;

class A
{
	protected:
		int a,b,c;
	public:
		void get()
		{
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
		}
		void add()
		{
			c=a+b;
			cout << "Sum = " << c << endl;
		}
};

class B
{
	protected:
		int s=8;
	public:
		void sqroot()
		{
			cout << "Square the number = " << s*s << endl;
		}
};

class C:public A,public B
{
	public:
		void calc()
		{
			c=pow(a,3)+pow(b,3);
			cout << "Sum of cubes of the number = " << c << endl;
		}
};

int main()
{
	C obj;
	obj.get();
	obj.add();
	obj.sqroot();
	obj.calc();
	
	return 0;
}
