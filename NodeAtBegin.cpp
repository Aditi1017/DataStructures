#include<bits/stdc++.h>

using namespace std;
struct Node {
	int data;
	Node* next;
};

Node* InsertNodeAtBegin(Node* head , int x) //this head will be local var of insert it is not same as that of main 
{
    Node* temp = new Node();
    temp ->data = x;
    temp->next = head;
    head = temp; // by this head , head of main will not be modified
    return head;
}

void PrintNode(Node* head)
{
    cout << "List is:";
    while(head){
    cout << head->data << " ";
    head = head -> next;
	}
	cout << "\n";
}

int main()
{
	Node* head = NULL;
	cout << "Enter the numbers to be inserted?\n";
	int n , x;
	cin >> n;
	for(int i =0 ; i<n ; i++)
	{
	    cout << "Enter the number \n";
	    cin >> x;
	    head = InsertNodeAtBegin(head , x);
	    PrintNode(head); // from here only value of head is copied to print
	    
	}
}
