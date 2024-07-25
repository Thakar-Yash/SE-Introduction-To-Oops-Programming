// 2. Write a program of to sort the array using templates

#include<iostream>
using namespace std;

template <class T>
void Swap(T &a,T &b){
	T temp = a;
	a = b;
	b = temp;;
}

template <class T>
void Sort(T arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				Swap(arr[j], arr[j+1]);
			}
		}
	}
}

main()
{
	int num[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(num) / sizeof(num[0]);
	
	Sort(num, n);
	
	for(int i=0; i<n; i++){
		cout<<num[i]<<" ";
	}
}

