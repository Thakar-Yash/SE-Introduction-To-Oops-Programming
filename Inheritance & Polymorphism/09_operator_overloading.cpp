// 9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class MyArray{
	public :
		int *arr;
		int size;
		
		MyArray(int n){
			size = n;
			arr = new int[size];
		}
		
		MyArray operator+(const MyArray& other){
			if(size != other.size){
				cout<<"\n\t Error : Array size don't match."<<endl;
			}
			
			MyArray result(size);
			for(int i=0; i<size; i++){
				result.arr[i] = arr[i] + other.arr[i];
			}
			return result;
		}
		
		void print(){
			for(int i=0; i<size; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

main()
{
	int n;
	cout<<"\n\t Enter the size of Arrays : ";
	cin>>n;
	
	MyArray a(n), b(n);
	
	cout<<"\n\t Enter elements of array a : ";
	for(int i=0; i<n; i++){
		cout<<"\n\t Enter a["<<i+1<<"] : ";
		cin>>a.arr[i];
	}
	
	cout<<"\n\t Enter elements of array b : ";
	for(int i=0; i<n; i++){
		cout<<"\n\t Enter b["<<i+1<<"] : ";
		cin>>b.arr[i];
	}
	
	MyArray c = a + b;
	
	cout<<"\t Array a : ";
	a.print();
	
	cout<<"\t Array b : ";
	b.print();
	
	cout<<"\t Array c : ";
	c.print();
	
}
