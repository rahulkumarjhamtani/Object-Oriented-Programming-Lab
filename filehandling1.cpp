#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("file.txt");
	fout << "Hello" << endl;
	fout.close();
}
