#include<iostream>
using namespace std;

class car		//Class name is car
{
	private:	//Access specifier
		float petrol,distance;
	public:		//Access specifier	
		car()	//Default Constructor
		{
			petrol=70;
			distance=0;
		}
		
	void show();
};

void car::show()	//Member function outside the class
{
	cout << "Petrol : " << petrol << " Litres" << endl;
	cout << "Distance : " << distance << " kms" << endl;
}

int main()
{
	car hondacity,civic;	//Objects
	hondacity.show();
	civic.show();
	
	return 0;
}
