//To print largest subarray sum:Brute force approach
#include<iostream>
using namespace std;

int PrintSubArraysum(int arr[],int n){
	int largest_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subArraysum = 0;
			for(int k=i;k<=j;k++){
				subArraysum+=arr[k];
		}
		largest_sum = max(subArraysum,largest_sum);
	}

}
return largest_sum;
}
int main(){
	int arr[]={1,-2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<PrintSubArraysum(arr,n);
	return 0;
}
