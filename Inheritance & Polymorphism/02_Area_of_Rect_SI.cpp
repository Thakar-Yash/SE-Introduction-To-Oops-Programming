// 2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int width;
		
		void set_value()
		{
			cout<<"\n\t Enter Length of Rectangle : ";
			cin>>length;
			cout<<"\n\t Enter Width of Rectangle : ";
			cin>>width;
		}
	
};

class AOR : public Rectangle
{
	public:
		void Area_of_Reactangle()
		{
			set_value();
			cout<<"\n\t Area of Rectangle is : "<<length * width;
		}
};

main()
{
	AOR A;
	A.Area_of_Reactangle();
	
}
