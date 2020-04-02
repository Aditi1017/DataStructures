#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node * right;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
}*root;
	

void LevelOrder(struct Node *root){
	
	queue<Node*> q;
	if(root == NULL)
	return;
	
	q.push(root);
	while(q.empty() == false){
		root = q.front();
		q.pop();
		cout << root->data <<" ";
		
		if(root->left){
			q.push(root->left);
		}
		if(root->right){
			q.push(root->right);
		}
	}
}

int main()
{
		root = new Node(1);    //struct Node *root = new Node(1)
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	
	LevelOrder(root);
	return 0;
}

