#include<iostream>
#define pi 3.14
using namespace std;


class fun
{
	public:
		void area(int);		//area of circle
		void area(int,int);		//area of rectangle
		void area(float,int,int);	//area of triangle
};
void fun::area(int a)
{
	cout << "Area of Circle = " << pi*a*a << endl;
}
void fun::area(int a,int b)
{
	cout << "Area of Rectangle = " << a*b << endl;
}
void fun::area(float t,int a,int b)
{
	cout << "Area of Triangle = " << t*a*b << endl;
}

int main()
{
	int ch,r,l,b,h;
	fun obj;
	cout << "----METHOD OVERLOADING----\n\n" << endl;
	cout << "1. Circle" << endl << "2. Rectangle" << endl << "3. Triangle" << endl << "4. Exit" << endl;
	
	while(1)
	{
		cout << "Enter your choice : ";
		cin >> ch;
		switch(ch)
		{
			case 1:
				cout << "Radius of circle : ";
				cin >> r;
				obj.area(r);
				break;
			case 2:
				cout << "Length of rectangle : ";
				cin >> l;
				cout << "Breadth of rectangle : ";
				cin >> b;
				obj.area(l,b);
				break;
			case 3:
				cout << "Base of triangle : ";
				cin >> b;
				cout << "Height of triangle : ";
				cin >> h;
				obj.area(0.5,b,h);
				break;
			case 4:
				exit(0);
				break;
			default:
				cout << "Enter correct choice." << endl;
		}
	}
	return 0;
}
