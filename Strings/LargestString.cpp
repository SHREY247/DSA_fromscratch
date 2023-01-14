//Largest string
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	int n;	
	cout<<"Enter number of strings"<<endl;				//	Number of strings
	cin>>n;
	cin.get();				//User presses \n character so to consume that character 
	cout<<"Enter "<<n<< " strings:\n";
	char sentence[10000];
	char largest[10000];
	int largest_len = 0;
	while(n--){
		cin.getline(sentence,1000);
		int len = strlen(sentence);
		if(len>largest_len){
			largest_len=len;
			strcpy(largest,sentence);
		}
				
	}
	cout<<"Largest sentence is "<<largest<<" and its length is "<<largest_len;
}
