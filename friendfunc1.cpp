#include<iostream>
using namespace std;

class home
{
	private:
		int chocolates;
		int pastries;
		int jellies;
	public:
		home()		//default constructor
		{
			chocolates=0;
			pastries=0;
			jellies=0;		
		}
		
		void setvalue(int c,int p,int j)	//member function of a class
		{
			chocolates=c;
			pastries=p;
			jellies=j;
		}
		
		void show()	//member function of a class
		{
			cout << "Items in Fridge ->" << endl;
			cout << "Chocolates : " << chocolates << endl;
			cout << "Pastries : " << pastries << endl;
			cout << "Jellies : " << jellies << endl;
		}	
		
		friend void eating(home);	  //eating function is now friend of class name ie DECLARATION
};

void eating(home o)	  //this function is not member function of class ie DEFINATION
{
	cout << "Rahul eats "<<  o.chocolates << " Chocolates, "<<  o.pastries << " Pastries and "<<  o.jellies << " Jellies." << endl;
}

int main()
{
	home rohan;		//creation of object
	rohan.setvalue(5,10,15);
	eating(rohan);
	
	return 0;
}
