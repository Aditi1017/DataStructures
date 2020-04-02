#include<bits/stdc++.h> 

using namespace std;

struct Node{
	int data;
	struct Node *right;
	struct Node *left;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
}*root;

void InOrder(struct Node *root){
	
	stack<Node*> s;
	
	while(1) {			// stack empty = false and root!= NULL
		while(root!= NULL){
												   //till root not equal to null
		 s.push(root);
		 root=root->left;					  	
	}
	
	if(s.empty())
	break;
	root = s.top();
	s.pop();
	cout << root->data << " ";
	root = root->right;
	}
}


int main(){
	
	root = new Node(1);
	root->left= new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);	
	
	InOrder(root);
	return 0;
	
}
