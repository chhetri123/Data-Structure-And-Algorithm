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
