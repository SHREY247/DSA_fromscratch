//2-D array basics
#include<iostream>
using namespace std;

void print(int arr[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	int arr[100][100];
	// n rows m columns
	cout<<"Enter number of rows and columns\n";
	int n,m;
	cin>>n>>m;
	cout<<"Enter the elements row wise\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	print(arr,n,m);
	return 0;	
}
