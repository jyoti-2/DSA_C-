// Rotate string by k times

#include<bits/stdc++.h>
using namespace std;

bool findele(unordered_set<int> s)
{
    if(s.find(42) != s.end())
    {
        return 1;
    }
    return 0;
}
int main()
{
    unordered_set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    //unordered_set<int> :: iterator i;
    for( auto i =s.begin() ;i != s.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << "\n";
    for(auto x : s)
    {
        cout << x << " ";
    }
    cout << "\n";

    cout << "\n";
    cout << findele(s);
    return 0;
    
}