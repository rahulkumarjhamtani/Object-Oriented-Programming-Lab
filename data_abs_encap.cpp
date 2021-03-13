#include<iostream>
using namespace std;

class car
{
	private:
		float p,d,m;
	public:
		void getdata()
		{
			cout << "Distance : ";
			cin >> d;
			cout << "Petrol : ";
			cin >> p; 	
		}
		void calc()
		{
			m = d/p;	
		}
		void show()
		{
			cout << "The Milege of car : " << m <<endl;
		}	
};

int main()
{
	car hondacity,civic;
	hondacity.getdata();
	hondacity.calc();
	hondacity.show();
	civic.getdata();
	civic.calc();
	civic.show();
	
	return 0;
}
