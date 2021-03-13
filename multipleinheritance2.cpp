#include<iostream>
using namespace std;

class car		//base class
{
	protected:
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
		
//		void showdata()
//		{
//			if(color==1)
//			cout << "Color of your car is Silver" << endl;
//			else if(color==2)
//			cout << "Color of your car is Golden" << endl;
//			else if(color==3)
//			cout << "Color of your car is Black" << endl;
//			else 
//			cout << "This Color Code doesn't exist" << endl;
//			
//			cout << "Fuel of your car is " << fuel;
//		}
};

class sportscar
{
	protected:
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
		
//		void setdata()
//		{	
//			cout << "Maximum Speed of your car : " << maxspeed << endl;
//			cout << "Alarms in your car : " << alarm << endl;
//			cout << "Air Bags in your car : " << airbags << endl;
//		}
};

class luxurycar:public car,public sportscar
{
	private:
		int sunroof;
		int LEDs; 
	public:
		void get()
		{
			cout << "\nEnter Sun roofs in your car :" << endl;
			cin >> sunroof;
			cout << "Enter number of LEDs in your car : " << endl;
			cin >> LEDs;
		}
		
		void display()
		{	
			if(color==1)
			cout << "Color of your car is Silver" << endl;
			else if(color==2)
			cout << "Color of your car is Golden" << endl;
			else if(color==3)
			cout << "Color of your car is Black" << endl;
			else 
			cout << "This Color Code doesn't exist" << endl;
			
			cout << "Fuel of your car is " << fuel << endl;
			cout << "Maximum Speed of your car : " << maxspeed << endl;
			cout << "Alarms in your car : " << alarm << endl;
			cout << "Air Bags in your car : " << airbags << endl;
			cout << "Sun roofs in your car : " << sunroof << endl;
			cout << "LEDs in your car : " << LEDs << endl;
		
		}
};

int main()
{
	luxurycar maybach;
	
	maybach.inputdata();
	maybach.getdata();
	maybach.get();
	maybach.display();
	
	return 0;
}
