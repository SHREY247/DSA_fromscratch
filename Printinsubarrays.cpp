//To print all possible subarrays of a given array
#include<iostream>
using namespace std;

void PrintSubArrays(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			cout<<"(";
			for(int k=i;k<=j;k++){
				if(k<j){
				
				cout<<arr[k]<<",";
			}
			else{
				cout<<arr[k];
			}
			}
			cout<<")";
			cout<<endl;
			
		}
	
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	PrintSubArrays(arr,n);
	return 0;
}
