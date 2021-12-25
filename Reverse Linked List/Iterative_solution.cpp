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
void Reverse(Node** head){
	if(*head==NULL){
		cout << "List is empty";
		return;
	}
	if((*head)->next==NULL){
		return;
	}
	Node *current,*prev,*next;
	current = *head;
	prev = NULL;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		
		prev = current;
		current = next;


	}
	*head = prev;
}
int main(){
	Node *head = NULL;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,5);
	Insert(&head,6);
	Print(head);
	Reverse(&head);
	Print(head);

	return 0;
}