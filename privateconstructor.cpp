#include<iostream>
using namespace std;

class x
{
	private:
		x()
		{
			cout << "X contructor" << endl;
		}
		friend class y;
};

class y
{
	public:
		y()
		{
			x obj;
			cout << "Y contructor" << endl;
		}
};

int main()
{
	y obj1;
	
	return 0;
}
