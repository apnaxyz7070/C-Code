#include<iostream>
using namespace std;

int getMax(int arr[],int size){
	int Max=INT_MIN;
	for(int i=0; i<size ; i++){
		Max=max(Max,arr[i]);
		//if(arr[i]>Max)
		//Max=arr[i];
	}
	return Max;
}

int getMin(int arr[],int size){
	int Min=INT_MAX;
	for(int i=0; i<size ; i++){
		Min=min(Min,arr[i]);
		//if(arr[i]<Min)
		//Min=arr[i];
	}
	return Min;
}
int main(){
	int size;
	cout<<"Enter Size of array: ";
	cin>>size;
	
	int arr[100];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	// find MAX_value of array
	
	int maxValue=getMax(arr,size);
	int minValue=getMin(arr,size);
	cout<< "maximum value of array is " << maxValue << endl;
	cout<< "minimum value of array is " << minValue << endl;

}
