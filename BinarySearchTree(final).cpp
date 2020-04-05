#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
}*root = NULL;

node * getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(node * root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

node * Insert(node * root, int data)
{
	if (root == NULL)
	return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

int main()
{  
	//node* root=NULL;
	root=Insert(root,20);
	Insert(root,15);
	Insert(root,25);
	Insert(root,18);
	Insert(root,10);
	Insert(root,16);
	Insert(root,19);
	cout<<"Before Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;

	root=Insert(root,17);
	cout<<"\nNode Inserted"<<endl;

	cout<<"\nAfter Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;

	return 0;
}
