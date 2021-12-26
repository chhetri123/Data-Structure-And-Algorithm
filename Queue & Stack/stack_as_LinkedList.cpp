#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *link;
};

Node *top = NULL;
void Push(int x){

	Node *temp = new Node();
	temp->data = x;
	temp->link = top;
	top = temp;

}
void Pop(){

	if(top==NULL){
		return;
	}
	top = top->link;
}
void Print(){
	if(top==NULL){
		return;
	}
	Node *temp = top;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->link;
	}
	cout<<"\n";

}
int main(){

	Push(67);
	Push(899);
	Push(80);
	Print();
	Pop();
	Pop();
	Print();
}