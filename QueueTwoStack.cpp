/*
We are given a stack data structure with push and pop operations, the task is to implement a queue using instances of stack data structure and operations on them.
Stack(LIFO) - insertion and deletion happens at same end
Queue(FIFO) - Insertion and deletion happens on opposite end


*/

#include<bits/stdc++.h>
using namespace std;

// By making enqueue operation costly
class Queue
{
    public:
    stack<int> s1, s2;
    void enqueue(int x)
    {   
       
        while(s1.empty() != true)
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) 
        {
            s1.push(s2.top());
            s2.pop();
        }

    }

    int dequeue()
    {
        if(s1.empty())
            cout << "Q is empty";
        
        int x = s1.top();
        s1.pop();
        return x;
    }
};

// By making dequeue operation costly
// class Queue{
//     public:
//     stack<int> s1, s2;
//     void enqueue(int x)
//     {
//         s1.push(x);
//     }
//     int dequeue()
//     {   // it both stacks are empty    (return true)
//         if(s1.empty() != false && s2.empty() != false)
//         {
//             cout <<"Q is empty";
//             exit(0);
//         }

//         if(s2.empty() != false) // s2 is empty
//         {
//             while(s1.empty() != true)
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int x = s2.top();
//         s2.pop();
//         return x;
//     }
// };


int main()
{   
    Queue q;
    q.enqueue(2);
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(10);

    cout << q.dequeue() <<" ";
    cout << q.dequeue() <<" ";
    cout << q.dequeue() <<" ";
    cout << q.dequeue() <<" ";
    cout << q.dequeue() <<" ";
    

    return 0;
}