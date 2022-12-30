//Selection sort
#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
	for(int pos=0;pos<=n-2;pos++){
		int current=arr[pos];
		int min_position=pos;
		//find out minimum element
		for(int j=pos;j<n;j++){
			if(arr[j]<arr[min_position]){
				min_position=j;
			}
			
		}
		swap(arr[min_position],arr[pos]);
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
	selection_sort(arr,n);
	
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
