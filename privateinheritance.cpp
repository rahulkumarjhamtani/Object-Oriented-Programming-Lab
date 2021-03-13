#include<iostream>
using namespace std;

class parent
{
	public:
		void display()
		{
			cout << "Parent Class" << endl;
		}
};

class child:private parent
{
	public:
		void show()
		{
			cout << "Child Class" << endl;
			display();
		}
		
};

int main()
{
	child c;
//	c.display();
	c.show();
	
	return 0;
}
