// 1. WAP to create simple calculator using class
#include<iostream>
using namespace std;

class Calculator
{
	private:
		int n1, n2;
		
	public:
		void get_value()
		{
			//int n1, n2;
			cout<<"\n\t Enter Value of n1 : ";
			cin>>n1;
			cout<<"\n\t Enter Value of n2 : ";
			cin>>n2;
		}
		void Addition()
		{
			cout<<"\n\t Sum is : "<<n1+n2;
		}
		void Substration()
		{
			cout<<"\n\t Substration is : "<<n1-n2;
		}
		void Multiplication()
		{
			cout<<"\n\t Multiplication is : "<<n1*n2;
		}
		void Division()
		{
			cout<<"\n\t Division is : "<<n1/n2;
		}
		int your_choice()
		{
			int choice;
			cout<<"\n\t Enter 1 for Addition";
			cout<<"\n\t Enter 2 for Substration";
			cout<<"\n\t Enter 3 for Multiplication";
			cout<<"\n\t Enter 4 for Division";
			cout<<"\n\t Enter Your Choice : ";
			cin>>choice;
			return choice;
		}
};

main()
{
	Calculator C;
	C.get_value();
	int choice = C.your_choice();
	switch(choice)
	{
		case 1 : C.Addition();
				break;
			
		case 2 : C.Substration();
				break;
				
		case 3 : C.Multiplication();
				break;
				
		case 4 : C.Division();
				break;
				
		default : cout<<"\n\t In valid......";
				break;
	}
}
