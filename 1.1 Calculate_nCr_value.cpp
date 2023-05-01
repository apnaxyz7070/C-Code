#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int nCr(int n, int r){
	int num= factorial(n);
	int denom= factorial(r) * factorial(n-r);
	
	return num/denom; 
	}
int main(){
	int n,r;
	cout<<"Enter the value of n and r for calculate nCr value: ";
	cin>>n>>r;
	int nCr_value=nCr(n,r);
	
	cout<<endl;
	cout<<"value of "<<n<<"C"<<r<<" is :"<<nCr_value;
	
	return 0;
}
