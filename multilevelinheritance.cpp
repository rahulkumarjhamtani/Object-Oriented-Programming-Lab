#include<iostream>
using namespace std;

class mall		//base class
{
	protected:
		int rice;
		int flour; 
	public:
		void inputdata()
		{
			cout << "Enter amount of rice in kgs : ";
			cin >> rice;
			cout << "Enter amount of flour in kgs : ";
			cin >> flour;
		}
		
};

class shop:public mall
{
	protected:
		int chocolate;
		int chips; 
		int coke;
	public:
		void getdata()
		{
			cout << "\nEnter number of chocolates purchased :";
			cin >> chocolate;
			cout << "Enter number of chips purchased : ";
			cin >> chips;
			cout << "Enter number of coke purchased : ";
			cin >> coke;
		}
		
};

class home:public shop
{
	private:
		int milk;
		int sugar; 
	public:
		void get()
		{
			cout << "\nEnter amount of milk in ltrs : ";
			cin >> milk;
			cout << "Enter amount of sugar in kgs : ";
			cin >> sugar;
		}
		
		void display()
		{	
			cout << "\nRice = " << rice << " kgs" << endl;
			cout << "Flour = " << flour << " kgs" << endl;
			cout << "Chocolates = " << chocolate << " box" << endl;
			cout << "Chips = " << chips << " packets" << endl;
			cout << "Coke = " << coke << " cans" << endl;
			cout << "Milk = " << milk << " ltrs" << endl;
			cout << "Sugar = " << sugar << " kgs" << endl;
		
		}
};

int main()
{
	home items;
	
	items.inputdata();
	items.getdata();
	items.get();
	items.display();
	
	return 0;
}
