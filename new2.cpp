#include<iostream>
using namespace std;

class parent
{
	public:
		void p(void)
		{
			cout << "Parent" << endl;
		}
};
class child:private parent
{
	public:
		
		void ch(void)
		{
			cout << "Child" << endl;
			p();
		}
};
int main(void)
{
	child c1;
	c1.ch();
	return 0;
}
