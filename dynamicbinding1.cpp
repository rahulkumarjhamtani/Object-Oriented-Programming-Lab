#include<iostream>
using namespace std;

class car
{
	public:
		virtual void acon()
		{
			cout << "AC of Car class" << endl;
		}
};

class sportscar:public car
{
	public:
		void acon()		//METHOD OVERRIDING
		{
			cout << "AC of Sports car class" << endl;
		}
};

int main()
{
	car *p,nano;
	sportscar audi;
//	audi.acon();		//EARLY BINDING
//	nano.acon();
	p=&audi;			//Base class pointer is storing the address of child class object (Base class pointer to child class object)
//	p->acon();				//Early Binding : acon called by type of p, so it will call the function of car class
	p->acon();				// DYNAMIC Binding
	
	return 0;
}

// for DYNAMIC BINDING, we use virual functions 
