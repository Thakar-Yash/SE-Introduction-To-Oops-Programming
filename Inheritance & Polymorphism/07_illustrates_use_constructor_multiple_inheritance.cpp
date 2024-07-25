// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class Base
{
	public :
		Base()
		{
			cout<<"\n\t Base Class Called : ";
		}
};
class Intermediate : public Base
{
	public :
		Intermediate()
		{
			cout<<"\n\t Intermediate Class Called : ";
		}	
};
class Derived : public Intermediate
{
	public :
		Derived()
		{
			cout<<"\n\t Derived Class Called : ";
		}
};

main()
{
	Derived D;
}
