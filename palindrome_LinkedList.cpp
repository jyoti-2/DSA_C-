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
// count the number of nodes in a linked list
int countNode(Node *head)
{
    int count = 0;
    while(head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
// mid element of linked list
// Traverse linked list using two pointers. Move one pointer by one and the other pointers by two. When the fast pointer reaches the end slow pointer will reach the middle of the linked list.

int midEle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    int x = slow->data;
    return x;
}
// checked if the list is palindrome using vector
bool isPalindrome(Node* head) 
{
        vector<int> v;
        while( head != NULL)
        {
            v.push_back(head->data);
            head = head->next;
        }
        
        int l = 0;
        int r = v.size()-1;
        
       while(l < r)
        {
            if(v[l] != v[r])
                return false;
         
                r--;
                l++;
        
        }
        return true;
}


void printlist(Node *n)
{
    while( n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = new Node(2);
    Node *second = new Node(4);

    Node *third = new Node(3);
    Node *fourth = new Node(4);

    Node *fifth = new Node(54);
    Node *sixth = new Node(21);

    head->next =  second  ;
    second->next = third;
    third->next = fourth;
    fourth->next =  fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    printlist(head);
    cout << "\n";
    cout << isPalindrome(head) << "\n";
    cout << countNode(head) << "\n";
    cout << midEle(head)<<"\n";
    
    return 0;
}