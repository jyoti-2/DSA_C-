#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 1, 1, 4, 5, 6,6};
    map<int, int> m;
    unordered_map<int, int> um;

    cout << m[1] << "\n"; // 0(initially there is no such ele in map)
    for(int i=0; i<v.size(); i++)
    {
        m[v[i]] = m[v[i]] + 1;
        um[v[i]]--;
    }

    cout << m[2] << "\n";


    cout << "Key" << " " << "Value" << "\n";
    for(auto x :m)
    cout <<  x.first << " " << x.second<< "\n";

    cout << "\n";
    for(auto x : um)
    cout << x.first << " " <<  x.second<< "\n";


    set<int> s;
    for(int i : v)
    {
        if(s.find(i) == s.end())
            s.insert(i);

        else
            cout << " duplicate found";
    }

    cout << "\n";
    for(auto x : s)
    cout << x << " ";

   return 0;

   /*

   duplicate found duplicate found
1 2 4 5 6


Key Value m[key] = value
1 2      
2 1      
4 1      
5 1
6 2

6 2
2 1
1 2
4 1
5 1
*/


}
