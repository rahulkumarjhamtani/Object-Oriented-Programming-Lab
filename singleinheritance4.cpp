//Variation 4
#include<iostream>
using namespace std;

class car		//base class
{
	protected:		//Access Specifier
		int color;
		char fuel; 
	public:
		void inputdata()
		{
			cout << "Enter color of your car :" << endl;
			cout << "1. Silver \n2. Golden \n3. Black" << endl;
			cin >> color;
			cout << "Enter fuel type of your car : ";
			cin >> fuel;
		}
		
		/*void showdata()
		{
			if(color==1)
			cout << "Color of your car is Silver" << endl;
			else if(color==2)
			cout << "Color of your car is Golden" << endl;
			else if(color==3)
			cout << "Color of your car is Black" << endl;
			else 
			cout << "This Color Code doesn't exist" << endl;
			
			cout << "Fuel of your car is " << fuel;
		}*/
};

class sportscar:public car
{
	private:
		int maxspeed;
		int alarm; 
		int airbags;
	public:
		void getdata()
		{
			cout << "\nEnter Maximum Speed of your car :" << endl;
			cin >> maxspeed;
			cout << "Enter number of Alarms in your car : " << endl;
			cin >> alarm;
			cout << "Enter number of Air Bags in your car : " << endl;
			cin >> airbags;
		}
		
		void setdata()
		{	
			cout << "Maximum Speed of your car : " << maxspeed << endl;
			cout << "Alarms in your car : " << alarm << endl;
			cout << "Air Bags in your car : " << airbags << endl;
			cout << "Color of Car : " << color << endl;
			cout << "Fuel of car : " << fuel << endl;
		}
};

int main()
{
	sportscar tesla;
	
	tesla.inputdata();
//	tesla.showdata();
	tesla.getdata();
	tesla.setdata();
	
	return 0;
}
