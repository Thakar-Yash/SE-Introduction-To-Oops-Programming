/*
1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include<iostream>
using namespace std;

class Cricketer
{
	public:
	string name;
	int age;
	
	void CriketerData()
	{
		cout<<"\n\t Enter Name of Criketer : ";
		cin>>name;
		cout<<"\n\t Enter Age of that Cricketer : ";
		cin>>age;
	}
	
	void display()
	{
		cout<<"\t Enter Name of Criketer : "<<name;
		cout<<"\n\t Enter Age of that Cricketer : "<<age;
	}
};
class Batsman : public Cricketer 
{
	private:
	int tr, ar, bp;
	
	void Average(int matches)
	{
		if(matches!=0)
			ar = tr / matches;
	}
	public :
	void inputData(int matches)
	{
		CriketerData();
		cout<<"\n\t Enter Total Runs : ";
		cin>>tr;
		cout<<"\n\t Enter Best Performance : ";
		cin>>bp;
		Average(matches);
	}
	
	void displayData()
	{
		display();
		cout<<"\n\t Total Runs : "<<tr;
		cout<<"\n\t Average Runs : "<<ar;
		cout<<"\n\t Best Performance : "<<bp;
	}
};

main()
{
	int matches;
	cout<<"\n\t Enter the number of matches player played : ";
	cin>>matches;
	
	Batsman B;
	B.inputData(matches);
	B.displayData();
}
