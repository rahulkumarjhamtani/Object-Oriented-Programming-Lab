#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		int inch;
	public:
		Distance()
		{
			feet=0;
			inch=0;
		}
		Distance(int f,int i)
		{
			feet=f;
			inch=i;
		}
		void display()
		{
			cout << "FEET : " << feet << " INCH : " << inch << endl;
		}
		Distance operator -()
		{
			feet=-feet;
			inch=-inch;
			return Distance(feet,inch);
		}
};

int main()
{
	Distance d1(11,3);
	Distance d2(-5,12);
	-d1;		//d1.-() d1.operator -()  d.sub()
 	d1.display();
 	-d2;
 	d2.display();
	
	return 0;
}
