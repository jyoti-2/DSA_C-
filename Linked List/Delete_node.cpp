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

void deletion( Node **head_ref, int data)
{
    Node *temp = *head_ref;
    Node *prev = NULL;
    if(temp != NULL && temp->data == data)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else{
        while(temp != NULL && temp->data != data)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
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
    deletion(&head, 3);
    printList(head);
    return 0;
}