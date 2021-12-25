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
void Print(Node* head ){
	cout << "The list is : ";
	while(head!=NULL){
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}
Node *head1;
void recursiveReverse(Node** p){
	
	if((*p)->next==NULL){
		head1 = *p;
		return;
	}
	
	recursiveReverse(&((*p)->next));
	Node *q = (*p)->next;
	q->next = *p;
	(*p)->next = NULL;

	// (*head)->next->next = *head;
}
int main(){
	Node *head = NULL;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,8);
	Print(head);
	recursiveReverse(&head);
	head = head1; // Reverse the list in recursive way
	Print(head);

	return 0;
}