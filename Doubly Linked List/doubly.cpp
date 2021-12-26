#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
};
Node *head ;
Node* getNewNode(int x){
	Node *newNode = new Node();
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;

}
void InsertAtHead(int x){
	Node* temp=getNewNode(x);
	if(head==NULL){
			head = temp;
	return;
	}
	
	head->prev = temp;
	temp->next = head;
	head = temp;
}

void Print(){
	cout << "Forward list: ";
	Node *temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}
void reversePrint(){
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;

	}
	//Reverse printing 
	cout << "Reverse List: ";
	while (temp!= NULL){
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << endl;

}
int main(){
	head = NULL;
	InsertAtHead(3);
	InsertAtHead(89);
	InsertAtHead(90);
	Print();
	reversePrint();
	return 0;
}