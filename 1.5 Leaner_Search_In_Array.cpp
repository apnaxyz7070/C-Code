#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(arr[i] == key)
		return 1;
	}
	return 0;
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
	
	int key;
	cout<<"Enter key for search to present or not in array : ";
	cin >> key;
	
	bool result=search(arr,size,key);
	
	if(result == 1)
	      cout<<" Yes, "<<key<<" Present In Array "<<endl;
    else
	 	  cout<<" No, "<<key<<" Not Present In Array "<<endl;
	
}
