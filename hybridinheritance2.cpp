#include<iostream>
using namespace std;

class student
{
	protected:
		char name[20];
		int id;
	public:
		void input()
		{
			cout << "Name of student : ";
			cin >> name;
			cout << "ID of student : ";
			cin >> id;	
		}	
};

class marks1:virtual public student
{
	protected:
		int dsa;
		int oops;
	public:
		void get1()
		{
			cout << "Marks in DSA : ";
			cin >> dsa;
			cout << "Marks in OOPS : ";
			cin >> oops;	
		}
		
};

class marks2:virtual public student
{
	protected:
		int aem;
		int de;
	public:
		void get2()
		{
			cout << "Marks in AEM : ";
			cin >> aem;
			cout << "Marks in DE : ";
			cin >> de;	
		}
};

class result:public marks1,public marks2
{
	private:
		float sum;
		float percent;
	public:
		void getdata()
		{
			sum = dsa+oops+aem+de;
			percent = sum/4; 
		}
		void showdata()
		{
			cout << "\nName of student = " << name << endl;
			cout << "ID of student = " << id << endl;
			cout << "Marks in DSA = " << dsa << endl;
			cout << "Marks in OOPS = " << oops << endl;
			cout << "Marks in AEM = " << aem << endl;
			cout << "Marks in DE = " << de << endl;
			cout << "Sum = " << sum << "/400"<< endl;
			cout << "Percentage = " << percent << "%" << endl;
		}
};


int main()
{
	result obj;
	obj.input();
	obj.get1();
	obj.get2();
	obj.getdata();
	obj.showdata();

	return 0;
}
