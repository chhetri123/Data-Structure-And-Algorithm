## **_Binary Tree Traversal_**

- Process of visiting each node in the tree exactly once in some order
  - Breadth-first
    - Level-Order
  - Depth -first
    - 1st visit root(D) and left(L)and right(R) -**Preorder** -DLR
    - Left->root->Right -**Inorder** -LDR
    - left->right->Root - **Postorder** -LRD

![Screenshot 2022-01-05 233909](https://user-images.githubusercontent.com/65161301/148265767-1e0b8b96-0521-4b62-b218-6e49d8096dee.png)

## **Preorder (DLR)**

### F->D->B->A->C->E->J->G->I->H->K

1. Visit root
2. visit left subtree
3. Visit rigt subtree

## **Inorder (LDR)**

### A->B->C->D->E->F->G->H->I->J->k

1.Visit Left -Subtree
2.Visit root 3. Visit right subtree

## **PostOrder (LRD)**

### A->C->B->E->D->H->I->G->K->J->F

1. Visit left Subtree
2. Visit right Subtree
3. Visit Root

## **Level-order-Traveral**

### F->D->J->B->E->G->K->A->C->I->H

- Time Complexity O(n)
- Space Completely O(1)-Best level O(n)-Worst level

In best case:

Its time complexity :O(n)
space Complexity:O(h) where h=height of tree

In worst case:

Its time complexity :O(n)
Its space complexity :O(log(n))

## **_Delete node from binary Serach tree_**

we have three cases for deleting the node of the tree:

- case 1:No child
- case 2: One child
- case 3: Two children

Method 1 for case 3:

- Find minimum in right sub tree
- copy the value in targetted node
- delete duplicate from right sub tree

Method 2 for case 3:

- FInd maximum value in left subtree
- copy the value in targetted node
- delete duplicate from left subtree
