#include<bits/stdc++.h>

using namespace std;

struct BinaryTreeNode{
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
}*root;

struct BinaryTreeNode * GetNewNode(int data){
    struct BinaryTreeNode *node;
    node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    
    node->data = data;
    node->left = node->right = NULL; 
    return(node);
}

/***void DeletBinaryTree(struct BinaryTreeNode *root){
    if(root== NULL)
    return;
    
    DeletBinaryTree(root->left);
    DeletBinaryTree(root->right);
    
    cout << "Deleted Node is:" << root->data << endl;
    free(root);
} ***/

void DeletBinaryTreeNonRecursive(struct BinaryTreeNode *root){
    queue<BinaryTreeNode*> q;
    q.push(root);
    
    while(q.empty()==false)
    {
        root =q.front();
        q.pop();
        
        if(root->left)
        q.push(root->left);
        if(root->right)
        q.push(root->right);
        cout << "Deleted Node is:" << root->data <<endl;
        
        root->left = root->right = NULL;
        free (root);
    }
}

int main()
{
    root =  GetNewNode(1);
    root->left = GetNewNode(2);
    root->right = GetNewNode(3);
    root->left->left = GetNewNode(4);
    root->left->right = GetNewNode(5);
    
   // DeletBinaryTree(root);
    DeletBinaryTreeNonRecursive(root);
    
    return 0;
}
