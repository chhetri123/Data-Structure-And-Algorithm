// Liner Queue

#include<iostream>
using namespace std;
int A[10];

int front = -1;
int rear = -1;
bool IsEmpty(){
	if(front == -1 && rear == -1){
		return true;
	} else {
		return false;
	}
}
bool IsFull(){
	if(rear== (sizeof(A)-1)){
		return true;
	}else{
		return false;
	}
}
void Enqueue(int n){
	if(IsFull()){
		cout << "Queue is full" << endl;
		return;
	}
	else if(IsEmpty())
{
	front = rear = 0;

}else{
	rear += 1;
	
}
A[rear] = n;
}

void Dequeue(){
	if(IsEmpty())
{
	return;
} else if(front==rear){
	front = rear = -1;

}else{
	front += 1;
}


}
void Print(){
	if(IsEmpty()){
		cout << "There are no element in a Queue" << endl;
		return;
	}
	for (int i = 0; i <=rear; i++)
	{
		cout << A[i] << " ";
}
cout << endl;
}
int main(){
	Enqueue(7);
	Enqueue(55);
	Enqueue(90);
	Print();
}