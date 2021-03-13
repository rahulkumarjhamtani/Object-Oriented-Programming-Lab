#include<iostream>
using namespace std;

struct complex
{
	private:
		int r,i;				//Encapsulation
	public:
		void setdata(int x,int y)
		{
			r=x;
			i=y;
		}
		void showdata()
		{
			cout << r << "+" << i << "i";
		}
};

int main()
{
	complex c1; 
	int a,b;
	cout << "Enter real part : " <<  endl;
	cin >> a; 
	cout << "Enter imaginary part : " <<  endl;
	cin >> b; 			
	c1.setdata(a,b);
	c1.showdata(); 
	
	
	return 0;
}

