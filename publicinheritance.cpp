#include<iostream>
using namespace std;

class parent
{
	private:
		int a;
	protected:
		void set(int k)
		{
			a=k;
			cout << "Value of a = " << a << endl;
		}
};

class child:public parent
{
	//protected : set(int k)
	public:
		void putdata(int x)
		{
			set(x);
		}
};

int main()
{
	child c;
//	c.set(6);
	c.putdata(8);
	
	return 0;
}
