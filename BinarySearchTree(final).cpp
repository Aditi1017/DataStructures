#include<iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
}*root = NULL;

node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

node* Insert(node* root, int data)
{
	if (root == NULL)
	return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

bool Search(node* root , int data)
{
	if(root==NULL)
	return false;
	else if(root->data == data)
	return true;
	else if(data <= root->data)
	return Search(root->left, data);
	else 
	return Search(root->right , data);
			
}

int main()
{  
	//node* root=NULL;
	root=Insert(root,50);
	Insert(root,30);
	Insert(root,20);
	Insert(root,40);
	Insert(root,70);
	Insert(root,60);
	Insert(root,80);
	cout<<"Before Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;

	root=Insert(root,25);
	cout<<"\nNode Inserted"<<endl;

	cout<<"\nAfter Insertion: ";
	cout<<"\nInorder: ";
	inorder(root);
	cout<<endl;
	
	int number ;
	cout << "Enter the number to be searched??? \n";
	cin >>number;
	if(Search(root,number)==true)
	cout << "Found\n";
	else
	cout << "Not Found\n";
	return 0;
	

}
