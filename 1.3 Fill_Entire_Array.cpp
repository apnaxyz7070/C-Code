#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
	int arr[10];
	int arr1[10];
	
	fill(arr,arr+10,1);
	fill(arr1,arr1+10,12);
	//fill(begin(arr1), end(arr1), 5);
	
	
	
	for(int i=0; i<10; i++){
		cout<<arr[i] << " ";
	}
	cout<<endl;
	
	for(int i=0; i<10; i++){
		cout<<arr1[i] << " ";
	}
}
