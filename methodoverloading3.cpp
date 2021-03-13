#include<iostream>
using namespace std;

class number
{
	public:
		void swap(int &,int &);
		void swap(float &,float &);
		void swap(char &,char &);	
};

void number::swap(int &a,int &b)
{
	int temp;
	cout << "\n Integer Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	temp=a;
	a=b;
	b=temp;
	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
}

void number::swap(float &a,float &b)
{
	float temp;
	cout << "\n Float Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	temp=a;
	a=b;
	b=temp;
	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
}

void number::swap(char &a,char &b)
{
	char temp;
	cout << "\n Character Swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	temp=a;
	a=b;
	b=temp;
	cout << "\na = " << a << endl;
	cout << "b = " << b << endl;
}

int main()
{
	number num;
	int a=10;
	int b=20;
	float c=3.4;
	float d=5.9;
	char e='M';
	char f='T';
	num.swap(a,b);
	num.swap(c,d);
	num.swap(e,f);
	
	return 0;
}
