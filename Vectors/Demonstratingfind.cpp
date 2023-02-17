//Using find
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int> arr={1,2,3,44,55,32,5,7,9};
	int key=11;
	vector<int>:: iterator it=find(arr.begin(),arr.end(),key);
	if(it!=arr.end()){
	cout<<"Element present at"<<it - arr.begin()<<endl;		
	}
	else{
	    cout<<"Element not found"<<endl;
	}
		
}
