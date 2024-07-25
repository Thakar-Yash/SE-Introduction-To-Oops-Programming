// 1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <class T>
void Swapping(T x, T y){
	cout<<"\n\t Before Swapping : ";
	cout<<"\n\t x = "<<x;
	cout<<"\n\t y = "<<y;
	T temp;
	temp = x;
	x = y;
	y = temp;
	cout<<"\n\n\t After Swapping : ";
	cout<<"\n\t x = "<<x;
	cout<<"\n\t y = "<<y;
}

main()
{
	int a, b;
	cout<<"\n\t Enter value of a : ";
	cin>>a;
	cout<<"\n\t Enter value of b : ";
	cin>>b;
	Swapping(a, b);
}

