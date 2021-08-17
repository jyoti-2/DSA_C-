#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> v, int total)
{
    map<int, int> m;
    for(int i=0; i<v.size(); i++)
    {
        m[v[i]] = i;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(m.find(total-v[i]) != m.end())
        
    }
}
int main()
{
    vector<int> v={2, 7, 11, 15};
}