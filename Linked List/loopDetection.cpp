/*
Loop detection in a linked list
Traverse the list one by one and keep putting the node addresses in a Hash Table. At any point, if NULL is reached then return false, and if the next of the current nodes points to any of the previously stored nodes in  Hash then return true.

Traverse linked list using two pointers.
Move one pointer(slow_p) by one and another pointer(fast_p) by two.
If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop.


*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void printLL(Node *n)
{
    while(n != NULL )
    {
        cout<< n->data << " ";
        n = n->next;
    }
}
// TC - O(n), SC- O(n)
// bool detectloop(Node *n)
// {
//     unordered_set<Node*> s;
//     while(n != NULL)
//     {
//         s.insert(n); // inserting the node not its value
//         n = n->next;

//         if(s.find(n) != s.end())
//             return true; // Loop found
        
//     }
//     return false; // no loop
// }

int detectloop(Node *n)
{
    Node *slow_p = n;
    Node *fast_p = n;

    while(slow_p != NULL && fast_p != NULL && fast_p->next != NULL)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p == fast_p)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    Node *head = new Node(2);
    Node *second = new Node(4);
    Node *third = new Node(6);
    Node *fourth = new Node(8);
    Node *fifth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second;
    fifth->next = NULL;

    //printLL(head);
    cout << detectloop(head);
    return 0;
}