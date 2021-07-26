// Insertion in a Binary Tree in level order
// Given a binary tree and a key, insert the key into the binary tree at the first position available in level order.

// Use iterative level order traversal using queue. if we find a node whose left child or right child is NULL/empty we put the keys at that position

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left ;
    struct Node *right;
};

Node *CreateNode(int data)
{
    Node *newNode = new Node();
    newNode-> data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insertion( Node *root, int key)
{
    if(root == NULL)
    {
        root = CreateNode(key);
        return root;
    }    
    queue<Node *> q;
    q.push(root);

    while(q.empty() == false)
    {
       Node *temp = q.front();
       q.pop();
       if(temp->left != NULL)
       q.push(temp->left);
       else
       {
           temp->left = CreateNode(key);
           return root;
       }

       if(temp->right != NULL)
       q.push(temp->right);
       else
       {
           temp->right = CreateNode(key);
           return root;
       }
    }
}
void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}
int main()
{
    struct Node *root = CreateNode(1);
    root->left = CreateNode(2);
    root->right = CreateNode(3);
    root->left->left = CreateNode(4);
    root->right->right =CreateNode(6);
    int key = 5;
    root = insertion(root, key);

    cout<<"\n";
    inorder(root);
    cout << endl;
    return 0;
}