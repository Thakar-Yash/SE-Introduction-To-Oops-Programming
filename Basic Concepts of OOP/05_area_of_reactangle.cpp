/* 5. Write a C++ program to create a class called Rectangle that has private member variables 
for length and width. Implement member functions to calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int l, w;
		
	public:
		void get_data()
		{
			cout<<"\t Enter Length of Recatangle : ";
			cin>>l;
			cout<<"\n\t Enter Width of Recatangle : ";
			cin>>w;
		}
		void AOR()
		{
			cout<<"\n\t Area of Rectangle is : "<<l*w;
		}
		void POR()
		{
			cout<<"\n\n\t Perimeter of Rectangle is : "<<2*(l*w);
		}
};

main()
{
	Rectangle R;
	R.get_data();
	R.AOR();
	R.POR();
}
