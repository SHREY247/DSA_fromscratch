//Printing all the possible paths from root to leaf
#include<iostream>
#include<vector>
using namespace std;
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

class Node{

public:
	int data;
	Node * left;
	Node * right;

	Node(int d){
		data = d;
		left = right = NULL;
	}
};


Node* buildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	Node* n = new Node(d);
	n->left = buildTree();
	n->right = buildTree();
	return n;
}


void printRoot2LeafPaths(Node * root,vector<int> &path){

	if(root==NULL){
		return;
	}

	if(root->left==NULL and root->right==NULL){
		//print the vector
		for(int node:path){
			cout<<node<<"->";
		}
		cout<<root->data<<"->";
		cout<<endl;
		return;
	}

	//rec case
	path.push_back(root->data);
	printRoot2LeafPaths(root->left,path);
	printRoot2LeafPaths(root->right,path);
	//backtracking
	path.pop_back();
	return;

}



int main(){

	Node * root = buildTree();
		vector<int> path;
	printRoot2LeafPaths(root,path);

	return 0;
}

