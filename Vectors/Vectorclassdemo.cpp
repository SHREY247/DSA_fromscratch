#include<iostream>
using namespace std;

class Vector{
	//Data Members
	int *arr;
	int cs;  //Current size
	int ms;	 //Maximum size
	
	public:
		Vector(int max_size=1){	//Here, Max-size has been defined by me as 1 and can be changed
			cs=0;
			ms=max_size;
			arr = new int[ms];
			}
			void push_back(int d){
				if(cs==ms){
					//Create new array deleting the old one and double the capacity
					int *oldArr=arr;
					ms = 2*ms;
					arr = new int[ms];
					//Copy the elements
					for(int i=0;i<cs;i++){
						arr[i]=oldArr[i];
					}
					//Delete the oldArr
					delete [] oldArr;
				}
				arr[cs]=d;
				cs++;
								
			}
			
			void pop_back(){				
					cs--;		
			}
			
			bool isEmpty(){
				return cs==0;
			}
			
			int front(){
				return arr[0];
			}
			
			int back(){
				return arr[cs-1];
			}
			
			int at(int i){
				return arr[i];				
			}
			int size(){
				return cs;
			}
			int capacity(){
				return ms;
			}
				
	};
	
	int main(){
		Vector v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		cout<<"Size: "<<v.size()<<endl;			//3
		cout<<"Capacity: "<<v.capacity()<<endl;		//4(1 doubles to 2, 2 doubles to 4)
		v.pop_back();
		cout<<"New size after pop_back: "<<v.size()<<endl;
		cout<<"Front element: "<<v.front()<<endl;
		cout<<"Back element: "<<v.back()<<endl;
		
		cout<<"The elements present in the vector are: "<<endl;
		for(int i=0;i<v.size();i++){
			cout<<v.at(i)<<" ";
		}
		
		}

