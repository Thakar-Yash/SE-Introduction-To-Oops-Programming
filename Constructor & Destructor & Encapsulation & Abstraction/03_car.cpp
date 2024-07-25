/* 3. Write a C++ program to create a class called Car that has private
		member variables for company, model, and year. Implement member
		functions to get and set these variables.*/
		
#include<iostream>
using namespace std;

class Car
{
	string company;
	string model;
	int year;
	
	public :
		void set_values()
		{
			cout<<"\n\t Enter your car Company : ";
			cin>>company;
			cout<<"\n\t Enter Car Model : ";
			cin>>model;
			cout<<"\n\t Enter Lanuched Year : ";
			cin>>year;
		}
		void get_values()
		{
			cout<<"\n\t car Company : "<<company;
			cout<<"\n\t Car Model : "<<model;
			cout<<"\n\t Lanuched Year : "<<year;
		}
};
main()
{
	Car C;
	C.set_values();
	C.get_values();
}
