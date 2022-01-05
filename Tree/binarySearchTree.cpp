#include<iostream>
#include<math.h>
#include<string>
using namespace std;

// here Struture is used as  pointer to point Node  as global pointer 
// struct BstNode{
// 	int data;
// 	BstNode *left;
// 	BstNode *right;
// };
// BstNode* GetNewNode(int data){
// 	BstNode *newNode = new BstNode();
// 	newNode->data = data;
// 	newNode->left = NULL;
// 	newNode->right = NULL;
// 	return newNode;
// }

// BstNode* Insert(BstNode* root,int data) {
              
//     if(root== NULL) { // empty tree
//         root=GetNewNode(data);
             
//     }
//     else if(data <= root->data) {
//       root->left = Insert(root->left,data);
//     }
//    else {
// 	   root->right = Insert(root->right, data);
// 	}
//     return root;
                      
// }
// bool Search(BstNode* root,int data){
// 	if(root==NULL)
// 		return false;

// 	if(root->data==data)
// 		return true;
// 	if(data<=root->data)
// 		return Search(root->left, data);
// 	else
// 		return Search(root->right, data);	
// }
// Using OOP methods 
class BTS {

	private:
		int data;
		BTS *left;
		BTS *right;
	public:

		BTS(){
			this->left=NULL;
			this->right=NULL;
		}
		BTS(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		};

		BTS *Insert(BTS *root, int data ){
			if(root == NULL){
				return new BTS(data);
			}
			if(root->data>data){
				root->left = Insert(root->left, data);
			}else{
					root->right= Insert(root->right, data);
			}
			return root;
		}

		bool Search(BTS * root, int data){
			if(root == NULL)
				return false;
			if(root->data == data)
				return true;
		if(data<=root->data)
			return Search(root->left, data);
		else
			return Search(root->right, data);	
}
		


		//  Find minimum and maximum element in BST

// Minimum
		int FindMin(BTS *root){
			if(!root){
			cout<<"Tree is Empty!"<<endl;
				return -1;
			}
			
			while(root->left != NULL){
				root=root->left;
			}
			return root->data;
		};

// Find maximum  .
		int FindMax(BTS *root){
			if(!root){
				cout<<"Tree is Empty!"<<endl;
				return -1;
			}
			while(root->right!=NULL){
				root= root->right;
			}
			return root->data;
		}

		int GetHeight(BTS * root){

			if(!root){
				return -1;
			}
			int leftHeight=GetHeight(root->left);
			int rightHeight=GetHeight(root->right);
			return (max(leftHeight, rightHeight) + 1);
		}
		void PrintTree(BTS *node, string prefix = "", bool isLeft = true);
};



int main(){
	BTS b,*root = NULL;
	root = b.Insert(root, 10);
	b.Insert(root, 7);
	b.Insert(root, 5);
	b.Insert(root, 6);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);
	b.Insert(root, 82);
	b.Insert(root, 75);
	b.Insert(root, 8);
	b.PrintTree(root);
	// int a;
	// cout << "Enter number to be searched : ";
	// cin >> a;
	// cout <<b.Search(root, a);
	cout << b.FindMin(root) << endl;
	cout<< b.FindMax(root) << endl;
	cout << b.GetHeight(root) << endl;
	
}
void BTS::PrintTree(BTS *Node , string prefix , bool isLeft )
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
}
