#include<vector>
using namespace std;

//Min Heap
class Heap{
	vector<int> v;
  
  //Case of min heap
  //To check whether all the conditions of min heap are met
  //If not, make appropriate changes
	void heapify(int i){

		int left = 2*i;
		int right = 2*i + 1;

		int minIdx = i;
		if(left < v.size() and v[left] < v[i]){
			minIdx = left;
		}
		if(right < v.size() and v[right] < v[minIdx]){
			minIdx = right;
		}

		if(minIdx!=i){
			swap(v[i],v[minIdx]);
			heapify(minIdx);
		}
	}

public:
	Heap(int default_size=10){
		v.reserve(default_size+1);
		v.push_back(-1);
	};

	void push(int data){

		//ad data to end of the heap
		v.push_back(data);

		int idx = v.size() - 1;
		int parent = idx/2;

		while(idx>1 and v[idx] < v[parent]){
			swap(v[idx],v[parent]);
			idx = parent;
			parent = parent/2;
		}
	}
	//return min element
	int top(){
		return v[1];
	}
	//Remove min element from a min heap
	void pop(){
		//1. Swap first and last element
		int idx = v.size() - 1;
		swap(v[1],v[idx]);
		v.pop_back();
		heapify(1);
	}	

	bool empty(){
		return v.size()==1;
	}

};
