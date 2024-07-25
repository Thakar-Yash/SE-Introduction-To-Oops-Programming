/* 7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;

class Date
{
	private:
	int day, month, year;
	
	public:
		void set_date()
		{
			cout<<"\t Enter Day of Month : ";
			cin>>day;
			cout<<"\n\t Enter Month of Year : ";
			cin>>month;
			cout<<"\n\t Enter Year : ";
			cin>>year;	
		}	
		
		void get_date()
		{
			cout<<"\n\t Day of Month : "<<day;
			cout<<"\n\t Month of Year : "<<month;
			cout<<"\n\t Year : "<<year;		
		}
};

main()
{
	Date D;
	D.set_date();
	D.get_date();
}
