#include<iostream>
using namespace std;
//For printing natural numbers in decreasing order
void dec(int n){
	//base case
	if(n==0){
		return;
	}
	//towards the base case
	cout<<n <<",";
	dec(n-1);
}

void inc(int n){
	//base case
	if(n==0){
		return;
	}
	inc(n-1);   //Printing done after the call, so print will be in opposite order of the call stack to that in dec function
	cout<<n <<",";
}

int main(){

	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);

	
	return 0;
}
