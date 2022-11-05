//To print largest subarray sum:Prefix sum approach
#include<iostream>
using namespace std;
int PrintlargestSubArraysum(int arr[],int n){
	int prefix[n] = {0};
   	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
		}
		
		int largest_sum = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				int subarraysum =  i>0 ? prefix[j] - prefix[i-1] : prefix[j];
				largest_sum = max(largest_sum,subarraysum);
				
			}
		}
		return largest_sum;
}

int main(){
	int arr[]={1,-2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<PrintlargestSubArraysum(arr,n);
	return 0;
}
