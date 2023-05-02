#include<iostream>
using namespace std;

void reverse(int arr[],int size){
	int start=0;
	int end=size-1;
	
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[],int size){
	for(int i=0; i<size; i++)
	cout<<arr[i]<<" ";
}
int main(){
	int size;
	int arr[100];
		
	cout<<"Enter size of array : ";
	cin>>size;
	
	cout<<"Enter element in array : ";
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	cout<<"Before reverse : ";
    printArray(arr,size);
	reverse(arr,size);
	cout<<endl;
	cout<<"After reverse : ";
	printArray(arr,size);
	
	return 0;
}
