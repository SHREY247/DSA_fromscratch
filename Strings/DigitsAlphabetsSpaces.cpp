//Find number of digits,spaces and alphabets in given text

#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the text\n";
	ch=cin.get();
	
	int alpha = 0;
	int space = 0;
	int digit = 0;
	
	while(ch!='\n'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alpha++;
		}
		
		else if(ch==' ' or ch=='\t'){
			space++;
		}
		ch=cin.get();
	}
	cout<<"Total Alphabets are "<<alpha<<endl;
	cout<<"Total Digits are "<<digit<<endl;
	cout<<"Total Spaces are "<<space<<endl;
	
	return 0;
	
}
