#include<iostream>
using namespace std;

struct student
{
	char name[30];
	int age;
	float weight;
};

int main()
{
	student St[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout << "Name of student " << i+1 << " -> " << endl;
		cin >> St[i].name;
		cout << "Age of student " << i+1 << " -> " << endl;
		cin >> St[i].age;
		cout << "Weight of student " << i+1 << " -> " << endl;
		cin >> St[i].weight;
	}
	
	cout << "Students Details ->" << endl;
	for(i=0;i<3;i++)
	{
		cout << "Name : " << St[i].name << endl << "Age : " << St[i].age << endl << "Weight : " << St[i].weight << endl;
	}
	
	return 0;
}
