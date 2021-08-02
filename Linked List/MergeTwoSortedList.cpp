/*
uses a temporary dummy node as the start of the result list. The pointer Tail always points to the last node in the result list, so appending new nodes is easy. 

*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void printlist(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int push(Node **head_ref, int new_data)
{
    Node *new_node = new Node(new_data);
    new_node->next = *head_ref;
    *head_ref  = new_node;
}


Node* merge(Node* a, Node* b)
{
    Node* result = NULL;
     
    /* Base cases */
    if (a == NULL)
        return(b);
    else if (b == NULL)
        return(a);
     
    /* Pick either a or b, and recur */
    if (a->data <= b->data)
    {
        result = a;
        result->next = merge(a->next, b);
    }
    else
    {
        result = b;
        result->next = merge(a, b->next);
    }
    return(result);
}
 
 Node *merge(Node *a, Node *b)
{
    Node *dummy = new Node(0);
    Node *tail = dummy;
    dummy->next = NULL;

    while(a != NULL && b != NULL)
    {
        if(a->data <= b->data)
        {
            tail->next = a;
            a = a->next;
        }

        else
        {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    while(a != NULL)
    {
        tail->next = a;
        a = a->next;
        tail = tail->next;
    }

    while (b != NULL)
    {
        tail->next = b;
        b = b->next;
        tail = tail->next;
    }
    return (dummy->next);
    
}
 
int main()
{
    Node *res = NULL;
    Node *a = NULL;
    Node *b = NULL;

    push(&a, 15);
    push(&a, 10);
    push(&a, 2);
    push(&a, 5);
    push(&a, 50);


    push(&b, 1);
    push(&b, 7);
    push(&b, 5);
    push(&b, 2);

    printlist(a);
    cout << "\n";
    printlist(b);
    cout << "\n";
    res = merge(a, b);
    printlist(res);
    return 0;
}
























