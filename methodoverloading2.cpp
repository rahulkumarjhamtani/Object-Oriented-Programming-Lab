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
	fun obj;
	obj.area(5);
	obj.area(4,7);
	obj.area(0.5,10,8);
	
	return 0;
}
