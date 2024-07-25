/* 6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
using namespace std;

class Employee
{
	private:
		string Ename;
		int EID;
		int salary;
	
	public :
	Employee(string empname, int eid, int sal)
		: Ename(empname), EID(eid), salary(sal) {}
		
	void setSalary(int pfactor)
	{
		//PFactor means Performance Factor
		salary *= pfactor; 
	}
	
	void display()
	{
		cout<<"\n\n\t Employee Name : "<<Ename;
		cout<<"\n\t Employee ID : "<<EID;
		cout<<"\n\t Employee Salary : "<<salary;
	}
};

main()
{
	Employee emp("Yash Thakar",123,50000);
	
	emp.display();
	emp.setSalary(2);
	emp.display();
}
