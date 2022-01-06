#include<iostream>
#include<queue>
using namespace std;
struct Node {

	int data;
	Node *left;
	Node *right;
};
Node* getNewNode(int data){
	Node *newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
		return newNode;
		};
	

Node *Insert(Node *root, int data ){
			if(root == NULL){
				return getNewNode(data);
			}
			if(root->data>data){
				root->left = Insert(root->left, data);
			}else{
				root->right= Insert(root->right, data);
			}
			return root;
		}
void LevelOrder(Node * root){
	if(root == NULL){
		return;
	}
	queue<Node *> Q;
	Q.push(root);

	while(!Q.empty()){
		Node *current = Q.front();
		cout<< current->data << " ";

		if(current->left!=NULL)
			Q.push(current->left);
		if(current->right!=NULL)	
			Q.push(current->right);
		
		Q.pop();
	}
}
void PrintTree(Node *Node , string prefix="", bool isLeft=true )
	{
    if (Node == NULL) {
        cout << "Empty tree";
        return;
    }

    if(Node->right) {
        PrintTree(Node->right, prefix + (isLeft ? "|   " : "    "), false);
    }

    cout << prefix + (isLeft ? "L___" : "|-- ") + to_string(Node->data) + "\n";

    if (Node->left) {
        PrintTree(Node->left, prefix + (isLeft ? "    " : "|   "), true);
    }
	};

int main(){
	Node *root = NULL;
	root = Insert(root, 5);
	root = Insert(root, 8);
	root = Insert(root, 1);
	root = Insert(root, 3);
	root = Insert(root, 0);
	root = Insert(root, 6);
	PrintTree(root);
	LevelOrder(root);
}