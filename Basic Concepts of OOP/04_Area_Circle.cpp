/* 4. Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference. */
#include<iostream>
using namespace std;

class Circle
{
	private:
		int r;
		
	public:
		void get_data()
		{
			cout<<"\n\t Enter Radius Of Circle : ";
			cin>>r;
		}
		void AOC()
		{
			float pi=3.14;
			float AOC = pi * r * r ;
			cout<<"\n\t Area Of Circle is : "<<AOC;
		}
		void COC()
		{
			float pi=3.14;
			float COC=2*pi*r;
			cout<<"\n\n\t Circumference of Circle is : "<<COC;
		}
};

main()
{
	Circle C;
	C.get_data();
	C.AOC();
	C.COC();
}

