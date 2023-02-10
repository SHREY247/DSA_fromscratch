#include<iostream>
#include<vector>
using namespace std;


int main(){
  //push_back() pushes an element in the end in O(1) time
	vector<char> vc;
	vc.push_back('a');
	vc.push_back('b');
	vc.push_back('c');  
   
	for(int i=0;i < vc.size();i++){
		cout << vc[i] <<endl;
	}


	vector<int> v = {1,2,3,4,5};

	v.push_back(6);

	cout<< v.size() <<endl; //6
	cout<< v.capacity() <<endl; //10(Initially, capacity was 5 equal to initialized array size but when we pushed 6, vector doubled in size)

	for(int i=0;i<v.size();i++){
		cout<< v[i] <<" ";
	}

}
