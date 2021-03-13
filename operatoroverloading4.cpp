#include<iostream>
using namespace std;

class num
{
	private:
		int a,b;
	public:
		void setdata(int x)
		{
			a=x;
		}
		void showdata()
		{
			cout << "Number = " << a << endl; 
		}
		num operator -()
		{
			num temp;
			temp.a=-a;
			return temp;
		}
};

int main()
{
	num n1,n2;
	n1.setdata(21);
	n2=-n1; 		//c1.operator -()
	n2.showdata();
	
	return 0;
}
