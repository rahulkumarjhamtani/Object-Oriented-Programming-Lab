#include<iostream>
using namespace std;

int main()
{
	int n,*pointer,i;
	cout << "Number of integer blocks " << endl;
	cin >> n;
	pointer = new int[n];  //DMA
	cout << "Details of " << n << " integer blocks " << endl;
	for(i=0;i<n;i++)
	{
		cin >> pointer[i];
	}
	cout << "The entered values are " << endl;
	for(i=0;i<n;i++)
	{
		cout << pointer[i] << endl;
	}
	
	delete[] pointer;
	
	return 0;
}
