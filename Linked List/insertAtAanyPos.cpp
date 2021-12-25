#include<iostream>
#include<conio.h>
using namespace std;
struct Node {
	int data;
	Node* next;
};

void InsertAt(Node** head,int data,int pos){
	Node *temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(pos==1){
		temp->next = *head;
		*head = temp;
		return;
	}
	Node *temp1 = *head;
	for (int i = 0; i < pos - 2;i++){
		temp1 = temp1->next;

	}
	temp->next = temp1->next;
	temp1->next = temp;
}
void Print(Node* head){
	cout << "List are: " ;
	while(head!=NULL){
		cout << head->data << " ";
		head = head->next;
	}
}
int main(){
	Node *head=NULL;
	InsertAt(&head, 65, 1);
InsertAt(&head, 64, 2);
	InsertAt(&head, 63, 3);
	Print(head);
	return 0;
}