/* 4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class Bank_Account
{
	int Account_Number;
	int Balance;	
	
	public :
		void set_values()
		{
			cout<<"\n\t Enter your Account Number : ";
			cin>>Account_Number;
			cout<<"\n\t Enter Your Balance : ";
			cin>>Balance;
		}
		void Deposite()
		{
			int deposite;
			cout<<"\n\t Enter Deposited Amount : ";
			cin>>deposite;
			Balance += deposite;
		}
		void Withdraw()
		{
			int withdraw;
			cout<<"\n\t Enter your Withdraw Amount : ";
			cin>>withdraw;
			if(withdraw<=Balance)
				Balance -= withdraw;
			else
				cout<<"\n\t Insufficient balance!";
		}
		int get_balance()
		{
			return Balance;
		}
		int get_account_number()
		{
			return Account_Number;
		}
};
main()
{
	Bank_Account BA;
	BA.set_values();
	cout<<"\n\t Your Account Number : "<<BA.get_account_number();
	cout<<"\n\t Your Avaliable Balance : "<<BA.get_balance();
	cout<<"\n\n";
	BA.Deposite();
	cout<<"\n\t Your Avaliable Balance : "<<BA.get_balance();
	cout<<"\n\n";
	BA.Withdraw();
	cout<<"\n\t Your Avaliable Balance : "<<BA.get_balance();
}
