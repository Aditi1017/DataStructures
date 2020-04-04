/*** #include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    
    BinaryTreeNode(int data){
        this->data = data;
		left = right = NULL;
    }
}*root;

void LeftViewBt(BinaryTreeNode * root){
    if(root == NULL)
    return;
       LeftViewBt(root->left);
       cout << root->data << " " ;
}
int main()
{
	root = new BinaryTreeNode(1);    //struct Node *root = new Node(1)
	root->left = new BinaryTreeNode(2);
	root->right = new BinaryTreeNode(3);
	root->left->left = new BinaryTreeNode(4);
	root->left->left->left = new BinaryTreeNode(5);
	root->right->left = new BinaryTreeNode(6);
	root->right->right = new BinaryTreeNode(7);
	
	LeftViewBt(root);
	return 0;
}
***/

#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    
    BinaryTreeNode(int data){
        this->data = data;
		left = right = NULL;
    }
}*root;

void LeftViewBt(BinaryTreeNode * root){
    
    if(root == NULL)
    return;
    queue<BinaryTreeNode*> q;
    q.push(root);
    while(q.empty() == false)
    {
        root = q.front();
        q.pop();
    cout << root->data << " ";
    if(root->left)
    q.push(root->left);
    }
}
int main()
{
	root = new BinaryTreeNode(1);    //struct Node *root = new Node(1)
	root->left = new BinaryTreeNode(2);
	root->right = new BinaryTreeNode(3);
	root->left->left = new BinaryTreeNode(4);
	root->left->left->left = new BinaryTreeNode(5);
	root->right->left = new BinaryTreeNode(6);
	root->right->right = new BinaryTreeNode(7);
	
	LeftViewBt(root);
	return 0;
}
