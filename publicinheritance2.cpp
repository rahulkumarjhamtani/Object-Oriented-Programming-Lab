#include<iostream>
#include<math.h>
using namespace std;

class parent
{
	private:
		int a;
	protected:
		void set(int k)
		{
			a=k;
			cout << "Cube of the number = " << pow(a,3) << endl;
		}
};

class child:public parent
{
	public:
		void putdata(int x)
		{
			set(x);
		}
};

int main()
{
	int z;
	cout << "Number = ";
	cin >> z;
	child c;
	c.putdata(z);
	
	return 0;
}
