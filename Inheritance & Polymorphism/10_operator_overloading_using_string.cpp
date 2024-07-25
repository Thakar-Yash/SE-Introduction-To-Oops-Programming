// 10.Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
using namespace std;

class MyString{
	public :
		string str;
		
		MyString(string s){
			str = s;
		}
		
		MyString operator+(const MyString& other){
			return MyString(str + other.str);
		}
		
		friend ostream& operator<<(ostream& os, const MyString& obj){
			return os << obj.str;
		}
};

main(){
	string s1, s2;
	cout<<"\n\t Enter String 1 : ";
	cin>>s1;
	
	cout<<"\n\t Enter String 2 : ";
	cin>>s2;
	
	MyString str1(s1);
	MyString str2(s2);
	
	MyString result = str1 + str2;
	
	cout<< "\n\t Concatenated  String is : "<< result << endl;
}
