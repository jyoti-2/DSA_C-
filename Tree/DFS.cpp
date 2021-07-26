// Depth first traversal
// Inorder traversal of BST gives sorted arrys
//  Preorder traversal is also used to get prefix expression on of an expression tree.
// Postorder traversal is also useful to get the postfix expression of an expression tree.

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// postorder - left, right, root
void postorder(struct  Node *node)
{
    if(node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout<< node->data << " ";
}

//inorder - left, root, right
void inorder(struct Node *node)
{
    if(node == NULL)
    return ;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

//preorder - root, left, right
// recursive algorithm
void preorder(struct Node *node)
{
    if(node == NULL)
        return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);

    postorder(root);
    cout << "\n";
    inorder(root);
    cout << "\n";
    preorder(root);
    cout << "\n";

    return 0;
}

/*
Time complexity: T(k) + T(n-k-1)+c
k is the number of nodes on one side of root and n-k-1 on the other side
If we don’t consider size of stack for function calls then O(1) otherwise O(h) where h is the height of the tree

Worst Space complexity: O(n) - skewed trees
Best space complexity: O(logn) - balanced tree

*/