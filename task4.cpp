#include<iostream>
using namespace std;

class cube
{
	private:
		int a;
	public:
		void setdata(int x)
		{
			a=x;
		}
		void show()
		{
			cout << "Side = " << a << endl;
		}
		void area()
		{
			cout << "Area = " << 6*a*a << endl;
		}
		void volume()
		{
			cout << "Volume = " << a*a*a;
		}
};

int main()
{
	cube c1;
	int i;
	cout << "Enter Side of Cube : ";
	cin >> i;
	c1.setdata(i);
	c1.show();
	c1.area();
	c1.volume();
	
	return 0;
}





