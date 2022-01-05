## Tree

How should I decide which data structure to use?

- What needs to be stored?
- cost of operation
- Memoryy usages
- Ease to implementation

## Intro of Tree

So, What do we use a tree for?

- use to represent hierarchical data.

The logical represention of tree data structure is always Root at top and branching out in downward direction

### Defination of Tree

- The collection of the entites called Nodes linked together to simulate the hierarchi.
  -Non Linear Data Structure .Its a hierarchical data structure
- Top most of the tree is called root of the tree
- Each nodes contain data.these data can be any type .May contain the refrence or link to some other nodes that can be called its childrens
- vocabulary of tree data structure:-
  - Root
  - Parents
  - Childrens
  - Sibling (have same parents)
  - leaf node (which doesnot have child )
  - If we can go from top node (A) to buttom node (B)
    - A is ancestor of B
    - B is descendant of A
- Recursive Data Structure
- N node then it will have exactly N-1 edges
- Depth And Height
  - Depth of x= length of path from root to x OR No. of edges in path from root to x
  - Depth of root will be zero
  - Height of x= No. of edges in longest path from x to a leaf
  - Height of tree = height of root Node

### **_Application_**

1. Storing naturally hierarcical daa -> eg :- File system

2. Organizing Data for quick search ,insertion ,deletion
3. Trie -> Dictionary

4. Network Routing Algorithm

### **Binary tree**

A tree in which each node can have at most 2 Childrens

- Left child
- Right Child

Node can have either of child

Strict /Proper Binary tree

- Each node can have either 2 or 0 children

Complete Binary Tree

- All levels except possibly the last are completely filled and all nodes are as left as possible
- max no. of node at level i=2^i

Perfect Binary Tree

- All the level are completely filled .
- Maximum no. of nodes in atree with height h =2^(h+1)-1 where h= no of levels
- Height of perfect Binary Tree with n nodes =log2(n+1)-1
- Height of complete binary tree=log2(n)

Balanced Binary Tree

- Difference between height of left and right subtree for ebery node is not more than k (mostly 1)
  -diff =| h(left)-h(right)|

**_Implementation_**

we can implement binary tree using:-

1.  Dynamically cretaed node .
2.  Arrays

**_Binary Search Tree_**

A binary tree in which for each node ,value of all the nodes in left subtree is lesser or equal and value of all the nodes in right subtree is greater.

What data Structure will you use to store a modifiable collection ?
ans- I can use an Array or a Linked list

We want to be able to perform below operations:

- Search(x) // Search for an element x // O(n) for array // O(n) for Linked List
- Insert(x) // Insert an element X // O(1) for array // O(1)
- Remove(x) // Remove an element x //
  O(n) for array //O(n)
  ![Screenshot 2022-01-03 234626](https://user-images.githubusercontent.com/65161301/147964817-5299014b-f9da-4fa7-9cdc-b05a26d44f89.png)
