#include<iostream>
using namespace std;

class box
{
	private:
		int l,b,h;
		
	public:
		void dimension(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
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
	box *p, smallbox;
	p=&smallbox;		//This is an object pointer that stores the address of the object
	p->dimension(12,14,16);
	p->show();
	
	return 0;
}
