#include <iostream>
using namespace std;

struct Node{
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
void PreOrder (Node *root){
	if(root==NULL)
		return;
	cout << root->data << " ";
	PreOrder(root->left);
	PreOrder(root->right);

}
int main(){
	Node *root = NULL;
	root = Insert(root, 5);
	root = Insert(root, 8);
	root = Insert(root, 1);
	root = Insert(root, 3);
	root = Insert(root, 0);
	root = Insert(root, 6);
	PreOrder(root);
}