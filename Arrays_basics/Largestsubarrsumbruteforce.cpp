//Largest Subarray sum Brute force
#include<iostream>
using namespace std;

int subarraySum(int arr[],int n){
	int largest_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subarrsum=0;
			for(int k=i;k<=j;k++){
				subarrsum+=arr[k];
			}
			largest_sum=max(largest_sum,subarrsum);
			
		}
	}
	return largest_sum;
}

int main()
{
	int arr[]={-1,4,5,6,-3};
	int n=sizeof(arr)/sizeof(int);
	cout<<subarraySum(arr,n);
	return 0;
}
