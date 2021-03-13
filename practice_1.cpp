#include<iostream>
using namespace std;

class student
{
	public:
		char collegeid[10];
		char name[30];
		int semester;
		int display();
		
};

int student::display()
{
	student s1;
	int i;
	for(i=0;i<3;i++)
	{
		cout << "College id of student " << i+1 << " is " << endl;
		cin >> s1.collegeid;
		cout << "Name of student " << i+1 << " is " << endl;
		cin >> s1.name;
		cout << "Semester of student " << i+1 << " is " << endl;
		cin >> s1.semester; 
	}
	
	for(i=0;i<3;i++)
	{
		cout << "College id of student " << i+1 << " is " << s1.collegeid << endl;
		cout << "Name of student " << i+1 << " is " << s1.name << endl;
		cout << "Semester of student " << i+1 << " is " << s1.semester <<  endl;
	}
	
}

int main()
{
	student s[3];
	s.display();
	
	return 0;
}
