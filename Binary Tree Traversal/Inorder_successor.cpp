#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *left;
	Node *right;
};
Node* FindMin(Node *root){
	if(root == NULL)
		return root;
	while(root->left != NULL){
		root=root->left;

	}
	return root;
}
Node * GetSuccessor(Node *root,int data){
	// search node of this data;
	Node *current = root;
	if(root == NULL)
		return root;

//  case : Node has right substree o
if(current->right!=NULL){
	return FindMin(current->right);
}

// case 2 : No right subtree;

else{
	Node *successor = NULL;
	Node *ancestor = root;
	while(ancestor != current){
		if(current->data<ancestor->data){
			successor = ancestor;
			
			ancestor = ancestor->left;

		}else{
			ancestor = ancestor->right;
		}
	}
	return successor;
}
}