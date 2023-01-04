//Counting sort
#include<iostream>
#include<limits>
#include<vector>
using namespace std;

void counting_sort(int arr[], int n){
	int largest=INT_MIN;
	for(int i=0;i<n;i++){
		largest=max(largest,arr[i]);
	}
		vector<int> freq(largest+1,0);
		
		for(int i=0;i<n;i++){
			freq[arr[i]]++;	
		}
		
		int j=0;
		for(int i=0;i<=largest;i++){
			while(freq[i]>0){
				arr[j]=i;
				freq[i]--;
				j++;
			}
			
		}
	
	return;
}


int main(){
	int arr[]={5,4,3,1,2};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Array before sorting is"<<endl;
	for(int i=0;i<n;i++){
		if(i!=n-1){
		cout<<arr[i]<<", ";
	}
	else{
		cout<<arr[i]<<endl;
	}
}
	counting_sort(arr,n);
	
	cout<<"Array after sorting"<<endl;
	for(int i=0;i<n;i++){
		if(i!=n-1){
		cout<<arr[i]<<", ";
	}
	else{
		cout<<arr[i]<<endl;
	}
}
return 0;
}
