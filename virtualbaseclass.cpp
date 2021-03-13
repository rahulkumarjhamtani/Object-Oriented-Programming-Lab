#include<iostream>
using namespace std;

class num
{
	protected:
		int op;
	public:
		void input()
		{
			cout << "Choose Operation ->\n" << "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division\n" << endl;
			cout << "Operation of numbers : ";
			cin >> op;	
		}	
};

class num1:virtual public num
{
	protected:
		int a;
	public:
		void get1()
		{
			cout << "a = ";
			cin >> a;	
		}
		
};

class num2:virtual public num
{
	protected:
		int b;
	public:
		void get2()
		{
			cout << "b = ";
			cin >> b;	
		}
};

class calc:public num1,public num2
{
	public:
		void showdata()
		{
			if(op==1)
				cout << "Sum = " << a+b << endl;
			else if(op==2 && b>=a)
				cout << "Subtraction = " << b-a << endl;
			else if(op==3)
				cout << "Multiplication = " << a*b << endl;
			else if(op==4 && b!=0)
				cout << "Division = " << a/b << endl;
			else 
				cout << "Try Again!!" << endl;
		}
};


int main()
{
	calc obj;
	obj.input();
	obj.get1();
	obj.get2();
	obj.showdata();

	return 0;
}
