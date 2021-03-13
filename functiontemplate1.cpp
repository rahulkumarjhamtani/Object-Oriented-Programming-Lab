#include<iostream>
using namespace std;

template <class t>

int getmax(t a,t b)
{
	t result;
	result = a>b?a:b;
	return result;
}

int main()
{
	int i=5,j=6,k;
	long l=10,m=5,n;
	
	k=getmax<int>(i,j);
	n=getmax<long>(l,m);
	cout << k << endl;
	cout << n << endl;
	
	return 0;
}
