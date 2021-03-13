#include<iostream>
using namespace std;

struct student
{
	char name[30];
	int age;
	float percentage;
	
};

student getdata(student);

void show(student);

int main()
{
	student s1;
	s1 = getdata(s1);
	show(s1);
	
	return 0;
}

student getdata(student s1)
{
	cout << "Enter your name : " << endl;
	cin >> s1.name;
	cout << "Enter your age : " << endl;
	cin >> s1.age;
	cout << "Enter your percentage : " << endl;
	cin >> s1.percentage;
	return s1;
}

void show(student s1)
{
	cout << "Name = " << s1.name << endl;
	cout << "Age = " << s1.age << endl;
	cout << "Percentage = " << s1.percentage << endl;
}
