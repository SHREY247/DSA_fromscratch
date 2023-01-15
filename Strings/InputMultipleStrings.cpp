//To input multiple strings using string class
//Inputting multiple strings
#include<iostream>				
#include<string>
#include<vector>
using namespace std;
int main(){
	string s;
	int n=5;
	vector<string> sarr;
	string temp;
	
	while(n--){
	getline(cin,temp);       //By default a string terminates at a new line
	sarr.push_back(temp);
	}
	cout<<"The strings are:\n";
	for(int i=0;i<sarr.size();i++){
		cout<<sarr[i]<<endl;
	}
	
}
