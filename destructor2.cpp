#include<iostream>
using namespace std;

class car		//Class name is car
{
	private:	//Access specifier
		float petrol,distance;
	public:		//Access specifier	
		car();	//Default Constructor
		
		car(float d,float p)	//Multiple parameterized constructor or constructor overloading
		{
			petrol=p;
			distance=d;
		}
		
		~car()
		{
			cout << "Destructor is called" << endl;
		}
		
	void show();
};

void car::show()	//Member function outside the class
{
	cout << "Milege : " << distance/petrol << " kmpl" << endl;
	
}

car::car()	//constructor defining outside the class
{
	distance=24;
	petrol=1;
}


int main()
{
	car hondacity,civic(83,5);	//Objects
	hondacity.show();
	civic.show();
	
	return 0;
}
