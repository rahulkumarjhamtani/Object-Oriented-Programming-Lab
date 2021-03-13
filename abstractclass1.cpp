#include<iostream>
using namespace std;

class parent
{
	public:
		virtual void fun()=0;
};
class child:public parent
{
	public:
		void fun()
		{
			cout << "Child class function" << endl;
		}
};
int main()
{
	parent *p;
	child c;
	p=&c;
	p->fun();
	
	return 0;
}
