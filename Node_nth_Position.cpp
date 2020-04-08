#include<bits/stdc++.h>

using namespace std;
struct Node {
	int data;
	Node* next;
};
Node* head;

void InsertAt_nth_Position(int data , int n) //this head will be local var of insert it is not same as that of main 
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1)
{
    temp1->next = head;
    head = temp1;
    return;
}
Node* temp2 = head;
for(int i =0 ; i < n-2 ; i++)
{
  temp2 = temp2->next;
}  

temp1->next = temp2->next;
temp2->next = temp1;

    }

void PrintNode()
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
	head = NULL;
	InsertAt_nth_Position(2 ,1);
	InsertAt_nth_Position(3 ,2);
	InsertAt_nth_Position(4 ,1);
	InsertAt_nth_Position(5 ,2);
	InsertAt_nth_Position(6 ,4);
	InsertAt_nth_Position(7 ,3);
	PrintNode();
	return 0;
}

