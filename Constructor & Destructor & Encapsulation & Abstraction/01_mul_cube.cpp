// 1. Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;

class values
{
	private:
		int a, b;
		
	public:
		inline int multiplication(int a, int b){
			cout<<"\n\t Multiplication is : "<<a*b;
			return a*b;
		}
		
		inline int cubic(int a){
			cout<<"\n\t Cubic is : "<<a*a*a;
			return a*a*a;
		}	
};

main()
{
	values V;
	V.multiplication(10,20);
	V.cubic(10);
}
