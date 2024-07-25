// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance

#include<iostream>
using namespace std;

class Private
{
	private:
		void get_private()
		{
			cout<<"\n\t This is a Private Function Accessible only in This class : ";
		}
};
class Protected
{
	protected:
		void get_protected()
		{
			cout<<"\n\t This is a Protected Function Accessible in This class and Derived class : ";
		}	
};
class Public : public Protected
{
	public:
		void get_public()
		{
			get_protected();
			cout<<"\n\t This is a Public Function Accessible in This class, Main Class & Derived Class : ";	
		}	
};
main()
{
	Public P;
	P.get_public();
	//P.get_protected(); // It can't accassible here
	//P.get_private(); // It can't accassible here
}
