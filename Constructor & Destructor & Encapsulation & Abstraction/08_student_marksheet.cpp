/* 8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/

#include<iostream>
using namespace std;

class Address
{
	public :
		string Area;
	
	 	Address(string Area)
	 	{
	 		this->Area = Area;		
		}
};

class Student
{
	private :
			Address *adr;
			string name, Class;
			int rollno, total;
			string grade;
			
			void calculategrade()
			{	
				int per = total / 5;
				
				if(per>=70)
					grade = "A+";
				else if(per>=60)
					grade = "A";
				else if(per>=50)
					grade = "B";
				else if(per>=40)
					grade = "C";
				else 
					grade = "Fail";
			}
					
			public :
			Student(string name, int rollno, string Class, int total, Address *adr)
			{	
				this->name = name;
				this->Class = Class;
				this->rollno = rollno;
				this->total = total;
				this->adr = adr;	
			}
			
			void print()
			{
				cout<<"\n\t Student Name : "<<name;
				cout<<"\n\t Student Class : "<<Class;
				cout<<"\n\t Student Roll No : "<<rollno;
				cout<<"\n\t Student Grade : "<<grade;
				cout<<"\n\t Student Address : "<<adr->Area;
			}
};

main()
{
	Address A("Ahmdabad");
	Student S("Yash", 101, "A", 350, &A);
	S.print();
}

