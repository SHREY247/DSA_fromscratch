//Check odd or even using and operation 
//If last bit is 0 we get even and for 1 we get odd
#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x&1){
		cout<<"Odd";
	}
	else{
		cout<<"Even";
	}
	return 0;
}
