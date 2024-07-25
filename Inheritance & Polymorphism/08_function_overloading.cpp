/* 8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include<iostream>
using namespace std;

int Calculator(int a, int b)
{
	return a + b;
}
int Calculator(int a, int b, char op)
{
	if(op == '-')
	{
		return a - b;
	}
}
int Calculator(double x, double y)
{
	return x*y;
}
int Calculator(double x, double y, char op)
{
	if(op == '/')
	{
		if(y!=0)
		{
			return x / y;
		}
	}	
}

main()
{
	int a=20, b=10;
	double x=100, y=5;
	cout<<"\n\t Calculator Using Function Overloading Program : \n";
	cout<<"\n\t Addition is : "<<Calculator(a,b);
	cout<<"\n\t Subtraction is : "<<Calculator(a,b,'-');
	cout<<"\n\t Multiplication is : "<<Calculator(x,y);
	cout<<"\n\t Division is : "<<Calculator(x,y,'/');
}
