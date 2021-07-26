// Breadth first traversal
// level order traversal

// using queue
// visit the node and then put its child node in a FIFO queue
/*
1. Create an empty queue q
2. temp_node = root
3. loop while temp_node is not NULL
 a. print(temp_node->data)
 b. enqueue temp_node child (left, right)
 c. dequeue a node from q

 */
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left = NULL;
    struct Node *right = NULL;
    Node(int data)
    {
        this->data = data;
        left, right = NULL;
    }
};

void levelorder(Node *root)
{
    if(root == NULL)
    return;
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        // enqueue its children
        if(node->left != NULL)
        q.push(node->left);

        if(node->right != NULL)
        q.push(node->right);
    }

}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    levelorder(root);
    return 0;
}

/* Time complexity - O(n) n - nodes in a Binary tree
Space Complexity - O(n)
*/