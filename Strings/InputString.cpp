//To input a string using string class
#include<iostream>				
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s,'.');       //Third argument indicates where to stop taking input
	cout<<s<<endl;
}
