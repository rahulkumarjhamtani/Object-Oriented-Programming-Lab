#include<iostream>
using namespace std;


struct book{
	char name[20];
	int id;
	float price;
};

struct book show();

int main()
{
	struct book b;
	b = show();
	
	cout << "Book name - ";
	cout << b.name << endl;
	cout << "Book ID - ";
	cout << b.id << endl;
	cout << "Book price - ";
	cout << b.price << endl;
	
}

 struct book show()
{
	struct book b1;
	cout << "Enter name of book - ";
	cin >> b1.name;
	cout << "Enter id of book - ";
	cin >> b1.id;
	cout << "Enter price of book - ";
	cin >> b1.price;
	
	return b1;
	
	
};

