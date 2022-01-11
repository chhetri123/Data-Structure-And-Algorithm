#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};

bool IsSubtreeLesser(Node * root ,int value){
	if(root==NULL)
		return true;
	if(root->data<=value &&
	IsSubtreeLesser(root->left,value)
	 && IsSubtreeLesser(root->right,value) ){
		return true;
	}
	return false;
}

bool IsSubtreeGreater(Node * root ,int value){
if(root==NULL)
	return true;
if(root->data>=value 
&&IsSubtreeGreater(root->right,value) 
&& IsSubtreeGreater(root->left,value))
	return true;
return false;
}


// It has worst time complexity O(n^2) and space complexity for larger number of node  we can minimize complexity by adding two extra parameter for ranging the data value 
bool IsBinaryTree(Node * root){
	if(root==NULL)
		return true;
	if(IsSubtreeLesser(root->left,root->data)
	&& IsSubtreeGreater(root->right,root->data)
	&& IsBinaryTree(root->left)
	&& IsBinaryTree(root->right)){
		return true;
	}
	return false;
}

// Another method 
// Its time complexity O(n)
bool isBinarySearchTree(Node* root,int max=INT_MAX,int min=INT_MIN){
	if(root== NULL)
		return true;
	if(root->data >min && root->data <max
	&& isBinarySearchTree(root->left,min,root->data) 
	&& isBinarySearchTree(root->right,max,root->data))
		return true;
	return false;
}