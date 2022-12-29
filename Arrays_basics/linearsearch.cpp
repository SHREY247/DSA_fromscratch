#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key){

    for(int i=0;i<n;i++) {
        if(arr[i]==key){
        return i;
        }
    }

    return -1;
}

int main()
{
    int arr[]={1,5,6,8,10,9,11};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter key\n";
    cin>>key;

    int index=linear_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index<<" \n";
    }
    else{
        cout<<key<<" is not present in the given array\n";
    }

}

