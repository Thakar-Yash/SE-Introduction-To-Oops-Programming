/* 5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;

class Triangle
{
	private :
		int l1,l2,l3;
		
	public :
		void set_length()
		{
			cout<<"\n\t Length 1 of Triangle : ";
			cin>>l1;	
			cout<<"\n\t Length 2 of Triangle : ";
			cin>>l2;
			cout<<"\n\t Length 3 of Triangle : ";
			cin>>l3;
		}
		
		void shape()
		{
			if(l1==l2 && l2==l3)
			{
				cout<<"\n\t Triangle is Equilateral :";
			}
			else if(l1==l2 || l2==l3 || l3==l1)
			{
				cout<<"\n\t Triangle is Isosceles :";
			}
			else
			{
				cout<<"\n\t Triangle is Scalene :";
			}
		}	
};

main()
{
	Triangle T;
	T.set_length();
	T.shape();
}
