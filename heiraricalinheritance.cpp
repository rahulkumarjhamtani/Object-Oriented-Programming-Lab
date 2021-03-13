#include<iostream>
using namespace std;

class mobile
{
	protected:
		char color[10];
		int price;
		char os[10];
	public:
		void input()
		{
			cout << "\nColor of Mobile : ";
			cin >> color;
			cout << "Price of Mobile : ";
			cin >> price;
			cout << "Operating System of Mobile : ";
			cin >> os;	
		}	
};

class iphone:public mobile
{
	private:
		char imodel[20];
		int ios;
	public:
		void get1()
		{
			cout << "Latest Model : ";
			cin >> imodel;
			cout << "IOS version of Mobile : ";
			cin >> ios;	
		}
		void show1()
		{
			cout << "\nColor = " << color << endl;
			cout << "Price = " << price << endl;
			cout << "Operating System = " << os << endl;
			cout << "Latest iphone Model = " << imodel << endl;
			cout << "IOS version of Mobile = " << ios << endl;
		}
};

class samsung:public mobile
{
	private:
		char smodel[20];
		int android;
	public:
		void get2()
		{
			cout << "Latest Model : ";
			cin >> smodel;
			cout << "Android version of Mobile : ";
			cin >> android;		
		}
		void show2()
		{
			cout << "\nColor = " << color << endl;
			cout << "Price = " << price << endl;
			cout << "Operating System = " << os << endl;
			cout << "Latest Samsung Model = " << smodel << endl;
			cout << "Android version = " << android << endl;	
		}
};


int main()
{
	iphone i;
	i.input();
	i.get1();
	i.show1();
	samsung s;
	s.input();
	s.get2();
	s.show2();
	
	return 0;
}
