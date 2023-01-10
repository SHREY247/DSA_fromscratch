//Shortest Route Coordinates

#include<iostream>
using namespace std;

int main()
{
	char route[1000];
	cout<<"Enter direction string\n";
	cin.getline(route,1000);
	int x=0;
	int y=0;
	
	for(int i=0;route[i]!='\0';i++){
		switch(route[i]){
			case 'N': y++;
			break;
			case 'S': y--;
			break;
			case 'W': x--;
			break;
			case 'E': x++;
			break;
		}
		
	}
	cout<<"Final x and y is "<<x<<", "<<y<<endl;

	
	return 0;	
}
