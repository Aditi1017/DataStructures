#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int data)  //constructor
	{
		this->data= data;
		left = right = NULL;
	}
}*root;

void PreOrder(struct Node *root){
	
	stack<Node*> s;
	//Node *curr = root;
	
	while(root!=NULL || s.empty() == false)  // to keep root node safe create another node as curr and store root address in it
	
	{
		while(root)				// root!=null
		{
			cout << root->data << " ";
			s.push(root);
			root=root->left;
		}				 
		
		root = s.top();
		s.pop();
		root = root->right;
	}
}

int main(){
	root = new Node(1);    //struct Node *root = new Node(1)
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	
	PreOrder(root);
	return 0;
}
