/* 12.Write a programto swap the two numbers using friend function
without using third variable */

#include<iostream>
using namespace std;

class Swapping{
	int a, b;
	
	public :
		void get_data()
		{
			cout<<"\n\t Enter value of a : ";
			cin>>a;
			cout<<"\n\t Enter value of b : ";
			cin>>b;
		}
		void put_data()
		{
			cout<<"\n\t Enter value of a : "<<a;
			cout<<"\n\t Enter value of b : "<<b;
		}
		
		friend void Swap(Swapping);
};

void Swap(Swapping S)
{
	S.a = S.a + S.b;
	S.b = S.a - S.b;
	S.a = S.a - S.b;
	
	cout<<"\n\n\t After Swapping : ";
	cout<<"\n\t Enter value of a : "<<S.a;
	cout<<"\n\t Enter value of b : "<<S.b;
}

main()
{
	Swapping S;
	
	S.get_data();
	cout<<"\n\n\t Before Swapping : ";
	S.put_data();
	Swap(S);
}
