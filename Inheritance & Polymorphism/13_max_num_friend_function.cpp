/* 13.Write a program to find the max number from given two numbers
using friend function */

#include<iostream>
using namespace std;

class Number{
	int num;
	
	public :
		Number(int n) : num(n) {}
		
		friend int max(Number n1, Number n2);
		
};
int max(Number n1, Number n2){
	return (n1.num > n2.num) ? n1.num : n2.num; 
}

main()
{
	int num1, num2;
	
	cout<<"\n\t Enter Number 1 : ";
	cin>>num1;
	
	cout<<"\n\t Enter Number 2 : ";
	cin>>num2;
	
	Number n1(num1), n2(num2);
	
	int maxNum = max(n1, n2);
	
	cout<<"\n\t Maximum Number : "<<maxNum;
}
