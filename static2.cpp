#include<iostream>
using namespace std;

class num
{
	private:
		int a;  //instance variable or member variable
		static int count;   //Static variable
	public:
		void set(int x)
		{
			a = x;
			cout << "Number : " << a << endl;				
			count++;
		}
		void display()		//instance member function
		{
			cout << "Count = " << count << endl;
		}
		static void see()	//static member function
		{
			cout << "Initial Counting = " << count << endl;
		}
};

int num::count=0;	//static member variable define

int main()
{
	num::see();		//without creating object calling of static member variable using static member function
	num n1,n2;
	n1.display();
	n2.display();
	n1.set(5);
	n1.display();
	n2.set(8);
	n2.display();
	
	return 0;
}
