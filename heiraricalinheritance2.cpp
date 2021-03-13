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
		void show()
		{
			cout << "Sum : " << a+b << endl;	
		}	
};

class derived1:public base
{
	private:
		int n;
	public:
		void input1()
		{
			cout << "n = ";
			cin >> n;
		}
		void show1()
		{
			cout << "Value of n : " << n << endl;
		}
};

class derived2:public base
{
	private:
		int m;
	public:
		void input2()
		{
			cout << "m = ";
			cin >> m;
		}
		void show2()
		{
			cout << "Value of m : " << m << endl;
		}
};

int main()
{
	derived1 obj1;
	derived2 obj2;
	
	obj1.input();
	obj1.show();
	obj1.input1();
	obj1.show1();
	
	obj2.input();
	obj2.show();
	obj2.input2();
	obj2.show2();
	
	return 0;
}
