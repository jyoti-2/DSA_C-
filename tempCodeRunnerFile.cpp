class Queue{
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