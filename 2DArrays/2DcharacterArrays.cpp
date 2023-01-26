#include<iostream>
using namespace std;
int main(){
	
	char numbers[][10]={
	"one",
	"two",
	"three",
	"four"
	};
	
	int i = 3;
	cout<<numbers[i][1]<<endl;   //1st element of 3rd row
	cout<<numbers[i]<<endl;		//Prints thw whole row
	//If instead of char, int type was used cout would have printed the address
	//cout treats character arrays differently
	return 0;	
}
