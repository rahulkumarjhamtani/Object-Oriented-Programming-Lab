#include<iostream>
using namespace std;

class kitefestival
{
	private:
		int kite;  //instance variable or member variable
		static int charkhi;   //Static variable
	public:
		void setkite(int k)
		{
			kite = k;
			cout << "Number of Kites : " << k << endl;
			charkhi++;
		}
		void display()		//instance member function
		{
			cout << "Charkhi used : " << charkhi << endl;
		}
		static void see()	//static member function
		{
			cout << "Charkhi used : " << charkhi << endl;
		}
};

int kitefestival::charkhi=0;	//static member variable define

int main()
{
	kitefestival::see();		//without creating object calling of static member variable using static member function
	kitefestival a,b,c;
	a.display();
	b.display();
	c.display();
	a.setkite(5);
	a.display();
	b.setkite(8);
	b.display();
	c.setkite(10);
	c.display();
	
	return 0;
}
