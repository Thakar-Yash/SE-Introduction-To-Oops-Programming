// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class Student
{
	public :
		string name;
		int age;
		int std;
	
		public :
			void get_details()
			{
				cout<<"\n\t Enter Student Name : ";
				cin>>name;
				cout<<"\n\t Enter Student Age : ";
				cin>>age;	
				cout<<"\n\t Enter Student Standard : ";
				cin>>std;
			}	
};
class Result 
{
	public:
		int marks[5];
		int total;
		float per;
		string grade;
		
		public:
			void get_result()
			{
				total = 0;
				for(int i=0; i<5; i++)
				{
					cout<<"\n\t Enter Subject "<<i+1<<" marks : ";
					cin>>marks[i];
					total += marks[i];
				}
				per = total/5;
			}
			
			
			void Grade()
			{
				if(per>80)
					grade = "A+";
				else if(per>70)
					grade = "A";
				else if(per>60)
					grade = "B";
				else if(per>50)
					grade = "C";
				else if(per>40)
					grade = "PC";
				else
					grade = "Fail";
			}
				
};

class MarkSheet : public Student , public Result
{
	public:
	void display()
	{	
		get_details();
		get_result();
		Grade();
		cout<<"\n\t Student Information -----------";
		cout<<"\n\t Student Name : "<<name;
		cout<<"\n\t Student Age : "<<age;
		cout<<"\n\t Student Standard : "<<std;
		
		cout<<"\n\n\t Student Result --------------";
		cout<<"\n\n\t Total : "<<total;
		cout<<"\n\t Persentage : "<<per;
		cout<<"\n\t Grade : "<<grade;
	}
};

main()
{
	MarkSheet M;
	M.display();
}
