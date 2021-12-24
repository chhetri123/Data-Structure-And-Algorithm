// simple implementation of stack


#include <iostream>
using namespace std;
int  const SIZE = 100;
int A[SIZE];
int top = -1;


void push(int x){
	// overflow check
	if(top == SIZE-1){
		cout << "Error:Stack Overflow" << endl;
		return;
	}
	A[++top] = x; //pre increment operator increment will happen before assignment
}

void pop(){
if(top== -1){
	cout << "Error: No element to pop " << endl;
	return;
}
	top--;
}
void Print(){
	cout << "Stack: ";
	for(int i=0; i<=top; i++){
		cout << A[i] << " ";
	}
}
int main(){
	int choice,value;
	do   
    {
           
            cout << endl<<"Enter the operation on stack." << endl;
            cout << "1. Push " << endl
                  << "2. POP " << endl
                   << "3. Exit" << endl;
            cin >> choice;
            system("cls");
        switch(choice){
            case 1:{
                cout << "Enter the element to push." << endl;
                cin >> value;
                push(value);
				Print();
				break;
            }

            case 2:{
				pop();
				Print();
				break;
            }

            case 3:
            exit (0);
        }
    } while(cin.get());


}
