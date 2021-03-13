#include<iostream>
using namespace std;

class box
{
	private:
		int l,b,h;		//instance variables
		
	public:
		void dimension(int l,int b,int h)		//local variables
		{
			this->l=l;		//because compiler will give preference to local variables so due to naming conflict unable to set the values in instance variables
			this->b=b;
			this->h=h;
		}
		void show()
		{
			cout<<"Length="<<l<<endl;
			cout<<"Breadth="<<b<<endl;
			cout<<"Height="<<h<<endl;
		}
};

int main()
{
	box smallbox;		
	smallbox.dimension(12,14,16);
	smallbox.show();
	
	return 0;
}
