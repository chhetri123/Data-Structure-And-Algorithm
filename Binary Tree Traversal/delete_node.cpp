#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *left;
	Node *right;
};
Node * FindMin(Node * root){
	if(root == NULL)
		return root;
	while(root->left != NULL){
		root=root->left;

	}
	return root;
}

struct Node * Delete(Node * root,int data){
 if(root == NULL)
	 return root;
else if(data<=root->data) root->left=Delete(root->left,data);
else if(data> root->right->data) root->right=Delete(root->right,data);

else{
	// case 1: no child;

	if(root->left ==NULL && root->right ==NULL){
		delete root;
		root = NULL;
		return root;

		//  case 2 : 1 child
	}else if( root->left==NULL){
	 root=root->right;
		return root;
	}else if(root->right==NULL){
		root=root->left;
		return root;
	}else{
		// case 3: 2 Childrens

		Node *temp = FindMin(root->right);
		root->data=temp->data;
		root->right=Delete(root->right,temp->data);

	}
}
return root;
}