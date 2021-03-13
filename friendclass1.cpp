#include<iostream>
using namespace std;

class one
{
	private:
		int b;
		void set(int x)
		{
			b=x;
			cout << "b = " << b << endl;
		}
		friend class two;
};

class two
{
	public:
		int a;
		void setdata(int y)
		{
			a=y;
			cout << "a = " << a << endl;
		}
		void sum()
		{
			one obj;
			obj.set(15);
			cout << "Sum = " << a+obj.b << endl;
		}
};

int main()
{
	two obj1;
	obj1.setdata(12);
	obj1.sum();
	
	return 0;
}
