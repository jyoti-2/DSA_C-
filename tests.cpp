#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     stack<int> v;
//     int a = 23421;
//     while(a>0)
//     { 
//         v.push(a%10);
//         a = a/10;
//     }
//     while(!v.empty())
//     {
//         cout << v.top() << " ";
//         v.pop();
//     }

//     return 0;
// }

// output of stack - 2 3 4 2 1
// output of vector - 1 2 4 3 2
void split(int sum, vector<int> v)
{
    while(sum > 0)
    {
        v.push_back(sum%10);
        sum /= 10;
    }
}
void sum(vector<int> a, vector<int> b)
{
   int n = a.size();
   int m = b.size();

    vector<int> res;
    int sum = 0;

    int i =0;
    while(i<m && i<n)
    {
        sum = a[i] + b[i];
        split(sum, res);
        i++;
    }
    while(i < m)
    {
        split(a[i++], res);
    }
    while(i < n)
    {
        split(b[i++], res);
    }

for(int  i : res)
    {
        cout << i << " ";
    }
  

}
int main()
{

    vector<int> a = {2, 3, 4 ,5};
    vector<int> b = {1,12, 3};
    vector<int> res;
   sum(a, b);
   
}
