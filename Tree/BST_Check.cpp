/* A binary search tree is a node based binary tree data structure
where left subtree of a node contains only nodes with keys less than the node's key.
and the right subtree of a node contains only nodes with keys greater than the nodes key.
- Both left and right subtree must also be binary search trees.


Method 1:
For each node, check if max value in left subtree is smaller than the node and min value in right subtree greater than the node. 


*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int bst(Node *node,int min, int max);
