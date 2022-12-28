//Bubble sort
#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
	for(int i=1;i<n;i++){					// i is for iteration
		for(int j=0;j<=n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
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
	bubble_sort(arr,n);
	
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
