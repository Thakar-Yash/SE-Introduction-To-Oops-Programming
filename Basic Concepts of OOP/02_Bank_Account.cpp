/* 
	2. Define a class to represent a bank account. Include the following members:
	3. Data Member:
		-Name of the depositor
		-Account Number
		-Type of Account
		-Balance amount in the account
		-----------------------
		Member Functions
			-To assign values
			-To deposited an amount
			-To withdraw an amount after checking balance
			-To display name and balance
*/

#include<iostream>
using namespace std;

class Bank
{
	private:
		string Name;
		int ACnum;
		string TOA;
		int Balance;
		
	public:
		void Add_value()
		{
			cout<<"\t Enter Name of Depositer : ";
			cin>>Name;
			
			cout<<"\n\t Enter Account Number : ";
			cin>>ACnum;
			
			cout<<"\n\t Enter Type of Account : ";
			cin>>TOA;
			
			cout<<"\n\t Enter Your Balance : ";
			cin>>Balance;
		}
		
		void deposite()
		{
			cout<<"\n\t Deposite Section : ";
			int DP;
			cout<<"\n\t Adding Amount in your Account : ";
			cin>>DP;
			Balance += DP;
		}
		
		void withdraw()
		{
			cout<<"\n\t Withdraw Section : ";
			int withdraw;
			cout<<"\n\t How Many you Want to Withdraw : ";
			cin>>withdraw;	
			if(Balance>withdraw)
				Balance-=withdraw;
			else
				printf("\n\t You can not withdraw \n");
		}
		
		void display_details()
		{
			cout<<"\n\t Current Details of Your Account : ";
			cout<<"\n\t Hii, "<<Name;
			cout<<"\n\t You Account Number : "<<ACnum;
			cout<<"\n\t Type Of Your Account : "<<TOA;
			cout<<"\n\t Avaliable Balance is : "<<Balance;
		}
};

main()
{
	Bank obj;
	
	obj.Add_value();
	obj.deposite();
	obj.withdraw();
	obj.display_details();
}
