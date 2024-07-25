/*
3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include<iostream>
using namespace std;

class Person
{
	protected:
	int age;
	string name;
	
	public:
		void set_person()
		{
			cout<<"\n\t Enter Name : ";
			cin>>name;
			cout<<"\n\t Enter Age : ";
			cin>>age;
		}
};

class Student
{
	protected:
	int per;
	
	public:
	void Percentage()
	{
		cout<<"\n\t Enter Student Percentage : ";
		cin>>per;
	}
};

class Teacher : public Person, public Student
{
	int sal;
	
	public:
	void get_info()
	{
		cout<<"\n\t Enter Salary of Teacher : ";
		cin>>sal;
	}
	
	void get_details()
	{
		cout<<"\n\n\t Name of Person : "<<name;
		cout<<"\n\t Age of Person : "<<age;
		cout<<"\n\t Student get "<<per<< "% Percentage";
		cout<<"\n\t Salary of Teacher is : "<<sal;
	}
};
main()
{
	Teacher T;
	cout<<"\n\t Person's Information : ";
	T.set_person();
	cout<<"\n\n\t Student's Information : ";
	T.Percentage();
	cout<<"\n\n\t Teacher's Information : ";
	T.get_info();
	T.get_details();
}
