#include<iostream>
using namespace std;

struct cuboid
{
	private:
		int l,b,h;
	public:
		void setdata(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void show()
		{
			cout << "Length = " << l << endl;
			cout << "Breadth = " << b << endl;
			cout << "Height = " << h << endl;
		}
		void area()
		{
			cout << "Area = " << 2*(l*b+b*h+h*l) << endl;
		}
		void volume()
		{
			cout << "Volume = " << l*b*h;
		}
};

int main()
{
	struct cuboid c1;
	int a,b,c;
	cout << "Enter length - ";
	cin >> a;
	cout << "Enter breadth - ";
	cin >> b;
	cout << "Enter height - ";
	cin >> c;
	c1.setdata(a,b,c);
	
	c1.show();
	c1.area();
	c1.volume();
	
	return 0;
}





