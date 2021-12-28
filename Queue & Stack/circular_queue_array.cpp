#include<iostream>
#define Arr_Size 100
using namespace std;
class CircularQueue{


	public:
		int front;
		int rear;
		int A[Arr_Size];
		CircularQueue(){
			front = -1;
			rear = -1;
		}

		bool IsEmpty() {

			return (rear == -1 && front == -1);
		}
		bool IsFull(){
			return ((rear + 1) % Arr_Size == front);
		}

		void Enqueue(int n){
			if(IsFull()){
				cout << "queue is full" << endl;
				
				return;
			} else if(IsEmpty()){

				rear = front = 0;
			

			}else{
				rear = (rear + 1) % Arr_Size;

			}
				A[rear] = n;
			
			
		}

		void Dequeue(){
			if(IsEmpty()){
				cout << "No elements in a queue to remove" << endl;
				return;
			} 
			if( front==rear){
				front = rear = -1;
				return;
			}
			front = (front + 1) % Arr_Size;
		}
		void Print(){

			if(IsEmpty()){
				cout << "No elements in a Queue"<< endl;
				return;
			}
			int size = (Arr_Size + rear ) % Arr_Size + 1;
			cout << "Queue : ";
			for(int i = front; i < size; i++){
				cout << A[i] << " ";
			}
			cout << endl;
		}
		int Front(){
			if(IsEmpty()){
				cout<<"No elements cannot return"<< endl;
				return -1;
			}
			return A[front];
		}
};

int main(){
	CircularQueue a;
	a.Enqueue(98);
	a.Enqueue(100);
	a.Enqueue(500);
	a.Print();
	cout << a.Front() << endl;
	a.Dequeue();
	cout << a.Front() << endl;
	a.Print();
	return 0;
}