#include <iostream>
using namespace std;

void fillArray(int *arr, int i, int n, int val){
    //base case
    if(i==n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return;
    }
    
    arr[i]=val;
    fillArray(arr,i+1,n,val+1);
    
    //Backtracking step
    //Here, going backwards all elements of the array are turned negative starting from i=n-1 and going back uptil i=0
    arr[i]=-1*arr[i];
}
-1

//Value of arr changes in main after the backtracking code is executed
//When function call first hit the base case, the original array gets printed from in an increasing order starting from val uptil val+n 
int main() {
    int arr[100]={0};
    int n;
    cin>>n;
    
    fillArray(arr,0,n,1);
    for(int i=0;i<n;i++){
    	cout<<endl<<arr[i]<<" ";
	}

    return 0;
}
