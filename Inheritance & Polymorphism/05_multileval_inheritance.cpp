/*
5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;

class Student
{
	public :
		string name;
		int age;
		int rn;
	
		public :
			void get_details()
			{
				cout<<"\n\t Enter Student Name : ";
				cin>>name;
				cout<<"\n\t Enter Student Age : ";
				cin>>age;	
				cout<<"\n\t Enter Student Roll No : ";
				cin>>rn;
			}	
			
			void display_details()
			{
				cout<<"\n\n\t Student Name : "<<name;
				cout<<"\n\t Student Age : "<<age;	
				cout<<"\n\t Student Roll No : "<<rn;
			}
};

class Test : public Student
{
	protected:
		int m1, m2;
		
		public :
			void get_marks()
			{
				cout<<"\n\t Enter English Mraks : ";
				cin>>m1;
				cout<<"\n\t Enter Maths Marks : ";
				cin>>m2;
			}
			void display_marks()
			{
				cout<<"\n\t English Mraks : "<<m1;
				cout<<"\n\t Maths Marks : "<<m2;
			}
};
class Result : public Test
{
	private:
		int total;
		
		public :
			void get_total()
			{
				total = m1 + m2;
				cout<<"\n\t Total : "<<total;
			}
};

main()
{
	Result R;
	R.get_details();
	R.get_marks();
	R.display_details();
	R.display_marks();
	R.get_total();
}
