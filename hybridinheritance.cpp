#include<iostream>
using namespace std;

class factory
{
	protected:
		char cotton;
		int price;
	public:
		void input()
		{
			cout << "Quality of cotton : ";
			cin >> cotton;
			cout << "Price of 1 kg of cotton : ";
			cin >> price;	
		}	
};

class manufacturer1:virtual public factory
{
	protected:
		int jeans;
		int piece;
	public:
		void get1()
		{
			cout << "Price of a jeans : ";
			cin >> jeans;
			cout << "Pieces of jeans : ";
			cin >> piece;	
		}
		
};

class manufacturer2:virtual public factory
{
	protected:
		int tshirt;
		int pieces;
	public:
		void get2()
		{
			cout << "Price of a T-shirt : ";
			cin >> tshirt;
			cout << "Pieces of T-shirts : ";
			cin >> pieces;	
		}
};

class retailshop:public manufacturer1,public manufacturer2
{
	private:
		int belt;
		int tie;
	public:
		void getdata()
		{
			cout << "Pieces of Ties : ";
			cin >> tie;
			cout << "Pieces of Belts : ";
			cin >> belt;
		}
		void showdata()
		{
			cout << "\nCotton Quality = " << cotton << endl;
			cout << "Price of 1 kg of cotton = " << price << endl;
			cout << "Price of a Jeans = " << jeans << endl;
			cout << "Pieces of Jeans = " << piece << endl;
			cout << "Price of a T-shirt = " << tshirt << endl;
			cout << "Pieces of T-shirts = " << pieces << endl;
			cout << "Pieces of Ties = " << tie << endl;
			cout << "Pieces of Belts = " << belt << endl;
		}
};


int main()
{
	retailshop shop;
	shop.input();
	shop.get1();
	shop.get2();
	shop.getdata();
	shop.showdata();

	return 0;
}
