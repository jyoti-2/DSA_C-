/*
Approach #2 (Recursive) [Accepted]
The recursive version is slightly trickier and the key is to work backwards. Assume that the rest of the list had already been reversed, now how do I reverse the front part? Let's assume the list is: n1 → … → nk-1 → nk → nk+1 → … → nm → Ø

Assume from node nk+1 to nm had been reversed and you are at node nk.

n1 → … → nk-1 → nk → nk+1 ← … ← nm

We want nk+1’s next node to point to nk.

So,

nk.next.next = nk;

Be very careful that n1's next must point to Ø. If you forget about this, your linked list has a cycle in it. This bug could be caught if you test your code with a linked list of size 2.

public ListNode reverseList(ListNode head) {
    if (head == null || head.next == null) return head;
    ListNode p = reverseList(head.next);
    head.next.next = head;
    head.next = null;
    return p;
}
Complexity analysis

Time complexity : O(n)O(n). Assume that nn is the list's length, the time complexity is O(n)O(n).

Space complexity : O(n)O(n). The extra space comes from implicit stack space due to recursion. The recursion could go up to nn levels deep.

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

class LinkedList{
    public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void print( )
    {   
        Node *n = head;
        while(n != NULL){
        cout << n->data << " ";
        n = n->next;
        }
    }


    void push( int data)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;

    }

};

int main()
{
    LinkedList ll;
    ll.push(2);
    ll.push(4);
    ll.push(6);
    ll.push(8);

    ll.print();
    cout<< "\n";
}