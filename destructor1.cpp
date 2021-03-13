#include<iostream>
using namespace std;

class car		//Class name is car
{
	private:	//Access specifier
		float petrol,distance;
	public:		//Access specifier	
		car();	//Default Constructor
		
		car(float p)	//Single parameterized constructor
		{
			petrol=p;
			distance=0;
		}
		car(float p,float d)	//Multiple parameterized constructor or constructor overloading
		{
			petrol=p;
			distance=d;
		}
		car(car &t)				//Copy constructor
		{
			petrol=t.petrol;
			distance=t.distance;
		}
		~car()
		{
			cout << "Destructor is called" << endl;
		}
		
	void show();
};

void car::show()	//Member function outside the class
{
	cout << "Petrol : " << petrol << " Litres" << endl;
	cout << "Distance : " << distance << " kms" << endl;
}

car::car()	//constructor defining outside the class
{
	petrol=0;
	distance=0;
}


int main()
{
	car hondacity(78,0),civic(83,5),audi,bmw(hondacity);	//Objects
	hondacity.show();
	civic.show();
	audi.show();
	bmw.show();
	
	return 0;
}
