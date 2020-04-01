#include<bits/stdc++.h>
using namespace std;
struct Node  // Creation of a single element of tree
{
    int data;
    struct Node *left;
    struct Node *right;
}root;

//preorder traversal of tree non recursively
void preOrder(Node *root) {
        stack<Node*> s;
        while(1)
        {
            while(root!=NULL)
            {
                s.push(root);
                cout<<root->data<<" ";
                root=root->left;
            }

            if(s.empty())
            break;

            root=s.Pop();
            root=root->right;
        }

    }

