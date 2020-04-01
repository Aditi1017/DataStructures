#include<iostream>

using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int data){
		this -> data = data;
		left = right = NULL;
	}
};

void InOrder(struct Node *root){
	if(root == NULL){
		return ;
	}
	InOrder(root -> left);
	printf("%d \t"  ,root -> data );
	InOrder(root -> right);
}

void PreOrder(struct Node *root){
	if(root == NULL){
		return;
	}
	
	printf("%d \t", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

void PostOrder(struct Node *root){
	if(root == NULL){
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d \t" , root->data);
	
}
	

int main()
{
	struct Node *root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	root -> left -> left = new Node(4);
	root -> right -> right = new Node(5);
	
	cout << "Inorder Traversal of given tree is: \n";
	InOrder(root);
	
	cout << "Preorder Traversal of given tree is: \n";
	PreOrder(root);
	
	cout << "PostOrder Traversal of given tree is: \n";
	PostOrder(root);
	
	return 0;
}
