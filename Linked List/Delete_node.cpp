#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};
void printList(Node *n)
{
    while(n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void push(Node **head, int data) // TC - O(1)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}

void insertAfter(Node *prev_node, int data) // O(1)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertend(Node **head_ref, int data) // O(n)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = data;
    new_node->next = NULL;

   if(*head_ref == NULL)
   {
       *head_ref = new_node;
       return;
   }
   while (last->next != NULL)
        last = last->next;

       last->next = new_node;
       return;
   
    
}
int main()
{
    Node *head = new Node();
    Node *sec = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    
    head->data = 1;
    head->next = sec;
    sec->data = 2;
    sec->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;

    printList(head);
    cout<<"\n";
    push(&head, 78);
    insertAfter(third, 89);
    insertend(&head, 56);

    printList(head);
    return 0;
}