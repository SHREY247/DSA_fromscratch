//Binary search works only in sorted array
#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){

	int s=0;
	int e=n-1;
	
	while(s<=e){
		int mid=(s+e)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
}

int main()
{
	//Sorted array
    int arr[]={1,5,6,8,10,11};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter key\n";
    cin>>key;

    int index=binary_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index<<" \n";
    }
    else{
        cout<<key<<" is not present in the given array\n";
    }

}


