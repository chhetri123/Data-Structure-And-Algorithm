#include<iostream>
#include<math.h>
using namespace std;

// here Struture is used as  pointer to point node  as global pointer 
struct BstNode{
	int data;
	BstNode *left;
	BstNode *right;
};
BstNode* GetNewNode(int data){
	BstNode *newNode = new BstNode();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

BstNode* Insert(BstNode* root,int data) {
              
    if(root== NULL) { // empty tree
        root=GetNewNode(data);
             
    }
    else if(data <= root->data) {
      root->left = Insert(root->left,data);
    }
   else {
	   root->right = Insert(root->right, data);
	}
    return root;
                      
}
bool Search(BstNode* root,int data){
	if(root==NULL)
		return false;

	if(root->data==data)
		return true;
	if(data<=root->data)
		return Search(root->left, data);
	else
		return Search(root->right, data);	
}
// int main(){
// 	 BstNode *rootPtr = NULL; // to store address of root node // Initiallyit is null

// 	rootPtr= Insert(rootPtr,5);
// 	rootPtr= Insert(rootPtr,10);
// 	rootPtr=Insert(rootPtr,3);
// 	int a;
// 	cout << "Enter number to be searched : ";
// 	cin >> a;
// 	bool isContain = Search(rootPtr, a);
// 	cout << isContain;
// 	return 0;
// }  

// Now using OOP to implement Binary Search tree


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
		
};

int main(){
	BTS b,*root = NULL;
	root = b.Insert(root, 2);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);
	int a;
	cout << "Enter number to be searched : ";
	cin >> a;
	cout <<b.Search(root, a);

	// functional call 
	 BstNode *rootPtr = NULL; // to store address of root node // Initiallyit is null

	rootPtr= Insert(rootPtr,5);
	rootPtr= Insert(rootPtr,10);
	rootPtr=Insert(rootPtr,3);
	cout << "Enter number to be searched : ";
	cin >> a;
	bool isContain = Search(rootPtr, a);
	cout << isContain;
}