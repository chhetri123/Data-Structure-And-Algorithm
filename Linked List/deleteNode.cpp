#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};

void Delete(Node** head,int n)
{

	if(n==1){
		*head = (*head) ->next;
		return;
	}
		Node *temp = *head;
	for (int i = 0; i < n - 2;i++){
		temp = temp->next; //n-1 node

	}
	// Node *temp1 = temp->next; //n node
	// temp->next = temp1->next;
	// delete temp1;
	temp->next = temp->next->next;
	
}

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
int main(){
	Node *head = NULL;
	Insert(&head,2);
	Insert(&head,4);
	Insert(&head,5);
	Insert(&head,6);
	Print(head);
	int n;
	cout << "Enter a postion to delete";
	cin>>n;
	Delete(&head,n);
	Print(head);
	return 0;
}