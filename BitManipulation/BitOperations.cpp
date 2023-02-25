//Operationsonbits
#include<iostream>
using namespace std;
//Assume indexing starts from the end
//Rightmost bit is at 0 index
int getIthBit(int n,int i){
	int mask = (1<<i);    //Do left shift by i 
	return (n & mask) > 0 ? 1 : 0;  //If after and operation, we get number greater than 0 then the bit was1 else 0
}

void setIthBit(int &n,int i){
 //Sets bit i as 1
	int mask = (1<<i); //Do left shift by i
	n = (n|mask); //OR mask with n
}

void clearIthBit(int &n,int i){
//Set bit i as 0
	int mask = ~(1<<i);  
	n = n & mask; //On doing and with mask i th bit will be set to 0 and all other bits will be preserved
}

void updateIthBit(int &n,int i,int v){
  //i is for index v is 0 or 1 with which you want to update
  //First clear 
	clearIthBit(n,i);
	int mask = (v<<i);
	n = n|mask; //sets the right value
}

//To clear last i bits
void clearLastIBits(int &n,int i){
	int mask = (-1 << i);
	n = n & mask;
}


void clearBitsInRange(int &n,int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a|b;
	n = n & mask;
}


int main(){

	int n = 31;
	int i=1;
	int j=3;
	//cin>>i;
	//cout<<getIthBit(n,i) <<endl;
	//setIthBit(n,i);
	//clearIthBit(n,i);
	//updateIthBit(n,i,0);
	clearLastIBits(n,i);
	//clearBitsInRange(n,i,j);
	cout << n <<endl;;



	return 0;
}
