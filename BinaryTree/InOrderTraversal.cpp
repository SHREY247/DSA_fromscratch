//In Order Traversal

#include<iostream>
#include<vector>
using namespace std;
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Inorder : 4, 2,7,5,1,3,6

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


void printInorder(Node *root){
	if(root==NULL){
		return;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
}

int main(){
	Node * root = buildTree();
	printInorder(root);
	cout<<endl;
	return 0;
}

