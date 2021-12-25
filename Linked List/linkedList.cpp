#include<iostream>
#include<conio.h>
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
int main(){
	int n, x;
	Node* head = NULL;//Empty list
	cout << "How many numbers :";
	cin >> n;
	for (int i = 0; i < n;i++){
		cout << "Enter the number: ";
		cin >>  x;
		Insert(&head,x);
		Print(head);
	}
	
} 