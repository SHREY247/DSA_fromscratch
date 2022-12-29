//Insertion sort
#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
	for(int i=1;i<=n-1;i++){
		int current = arr[i];
		int prev =i-1;
		
		while(prev>=0 && arr[prev]>current){
			arr[prev+1]=arr[prev];
			prev--;
		}
		arr[prev+1]=current;
		
		
	}
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
	insertion_sort(arr,n);
	
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
