//To print largest subarray sum:Kadane's Algo
#include<iostream>
using namespace std;
int PrintlargestSubArraysum(int arr[],int n){
	int cs=0;
	int largest=0;
	for(int i=0;i<n;i++){
		cs = cs+arr[i];
		if(cs<0){
			cs=0;
		}
		largest=max(largest,cs);
	}
	return largest;
}

int main(){
	int arr[]={1,-2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<PrintlargestSubArraysum(arr,n);
	return 0;
}
