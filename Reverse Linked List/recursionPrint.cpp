#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

void Insert(Node** head,int x){

	Node *temp = new Node();
	temp->data = x;
	temp->next = *head;
	*head = temp;

}

// print the linked list in reversed order 
void reversePrint(Node* head ){
if(head==NULL) {
	return;
}
	
		reversePrint(head->next);
		cout << head->data<<" ";
	
	

}

int main(){
	Node *head = NULL;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,5);
	Insert(&head,6);
	reversePrint(head); //Print reversed Order
	

	return 0;
}