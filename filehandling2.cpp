#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	fin.open("file.txt");
	char a;

	while(!fin.eof())
	{
		cout << a;
		fin >> a;
	}
	fout.close();
}
