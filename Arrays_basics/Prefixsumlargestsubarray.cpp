//Largest Subarray sum Prefix Sum
#include<iostream>
using namespace std;

int subarraySum(int arr[],int n){
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	int largest_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subarrsum=i>0 ? prefix[j]-prefix[i-1] : prefix[j];
		
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
