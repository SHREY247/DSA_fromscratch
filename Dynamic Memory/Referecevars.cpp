//Concept of reference variables
#include<iostream>
using namespace std;

int main(){

	int x = 5;
	int &y = x;     //y and x are same bucket

	y++; 
	x++;

	cout << x <<endl;
	cout << y <<endl;




	return 0;
}
