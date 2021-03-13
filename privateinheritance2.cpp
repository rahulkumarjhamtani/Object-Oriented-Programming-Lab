#include<iostream>
using namespace std;

class parent
{
	private:
		int a;
	public:
		int set()
		{
			cout << "Number = ";
			cin >> a;
			return a;
		}
};

class child:private parent
{
	private:
		int b;
	public:
		void show()
		{
			b=set();
			cout << "Square of the number = " << b*b << endl;
		}
		
};

int main()
{
	child c;
	c.show();
	
	return 0;
}
