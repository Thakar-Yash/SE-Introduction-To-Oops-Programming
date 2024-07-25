// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;

class Calculator
{
	private:
		double a;
		double b;
		
	public:
		Calculator(double x, double y): a(x), b(y) {}
		double Addition()
		{
			return a+b;
		}
		double Subtraction()
		{
			return a-b;
		}
		double Multiplication()
		{
			return a*b;
		}
		double Division()
		{
			if(b!=0){
				return a/b;
			}
			else{
				cout<<"\t Invalid Argument";
			}
		}	
};
main()
{
	double num1, num2;
	cout<<"\t Enter num1 Value : ";
	cin>>num1;
	cout<<"\t Enter num2 Value : ";
	cin>>num2;
	
	Calculator C(num1, num2);
	
	cout<<"\n\t Addition : "<<C.Addition();
	cout<<"\n\t Subtraction : "<<C.Subtraction();
	cout<<"\n\t Multiplication : "<<C.Multiplication();
	cout<<"\n\t Division : "<<C.Division();
}
