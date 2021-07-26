#include<bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node *next;
};

void printlist(Node *head)
{   
    while(head != NULL)
   {
    cout << head->data << " ";
    head = head->next;
   } 
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    // allocating the nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data =  4;
    fourth->next = NULL;

    printlist(head);

    return 0;
}