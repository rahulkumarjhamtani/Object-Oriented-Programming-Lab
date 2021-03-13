#include<iostream>
using namespace std;

class a
{
	public:
		a()
		{
			cout << "Constructor of parent class" << endl;
		}
};

class b:public a
{
	public:
		b()
		{
			cout << "Constructor of child class" << endl;
		}
};

int main()
{
	b obj;
	return 0;
}
