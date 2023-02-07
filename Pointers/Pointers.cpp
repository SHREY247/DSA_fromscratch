//Pointers hold addresss of another variables
#include<iostream>
using namespace std;
int main()
{
	int x=5;
	int *xptr=&x;
	cout<<xptr<<endl;	//xptr stores the address of x
}
