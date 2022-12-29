#include<iostream>
using namespace std;
void ReverseArray(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s += 1;
		e -= 1;
	}
	
}
int main()
{
	int arr[]={1,5,8,4,6};
	int n=sizeof(arr)/sizeof(int);
	cout<<"Array before reversing: \n";
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	ReverseArray(arr,n);
	cout<<"Array after reversing: \n";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
