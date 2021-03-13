#include<iostream>
using namespace std;

struct toy
{
	int toyid;
	float price;
	
};

int main()
{
	toy t1,*ptr;
	ptr = &t1;
	cout << "Toy ID ->" << endl;
	cin >> ptr->toyid;
	cout << "Toy price ->" << endl;
	cin >> ptr->price;
	
	cout << "Details of Toy" << endl;
	cout << "Toy ID : " << ptr->toyid << endl;
	cout << "Toy Price : " << ptr->price << endl;

	return 0;
}
