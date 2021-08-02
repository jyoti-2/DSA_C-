/* While you are traversing the list, change the current node's next pointer to point to its previous element. Since a node does not have reference to its previous node, you must store its previous element beforehand. You also need another pointer to store the next node before changing the reference. Do not forget to return the new head reference at the end!
*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void printList(Node *n)
{
    while(n != NULL)
    {
        cout << n->data <<  " ";
        n = n->next;
    }
}
// iterative approach
void reverseList(Node **head_ref)
{
    Node *curr = *head_ref;
    Node *prev = NULL;
    Node *nxt = NULL;

    while(curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    *head_ref = prev;
}



int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    printList(head);
    cout << "\n";
    reverseList(&head);
    printList(head);
    return 0;
}

//TC - O(n)
//SC - O(1)