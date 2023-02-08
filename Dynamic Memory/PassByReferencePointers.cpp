/*Pass by reference using pointers*/
#include<iostream>
using namespace std;

void applyTax(int * income){
	float tax = 0.10;
	*income = *income - (*income)*tax;
}


int main(){

	int income;
	cin>>income;

	applyTax(&income);

	cout << income <<endl;

}
