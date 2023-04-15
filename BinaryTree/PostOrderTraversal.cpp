//Post Order Traversal

#include<iostream>
#include<vector>
using namespace std;
//Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Postorder : 4,7,5,2,6,3,1
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

void postOrder(Node * root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data <<" ";
}

int main(){

	Node * root = buildTree();
	postOrder(root);
	cout<<endl;
	return 0;
}

