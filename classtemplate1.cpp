#include<iostream>
using namespace std;

template <class t>

class mypair
{
	private:
		t a,b;
	public:
		mypair(t first,t second)
		{
			a=first;
			b=second;
		}
		t getmax();		
};

template <class t>

t mypair<t>::getmax()
{
	t result;
	result = a>b?a:b;
	return result;
}
int main()
{
	mypair <int> obj(100,75);
	cout << obj.getmax();
	
	return 0;
}
