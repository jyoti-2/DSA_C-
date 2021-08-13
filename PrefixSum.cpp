#include<bits/stdc++.h>
using namespace std;

vector<int> PrefixSum(vector<int> v)
{   
    int sum = 0;
    vector<int> res;
    for(int i=0 ;i<v.size(); i++)
    {
        sum += v[i];
        res.push_back(sum);
    }
    return res;
}

vector<int> PostfixSum(vector<int> v)
{   
    int sum = 0;
    vector<int> res;
    for(int i=v.size()-1 ;i>=0; i--)
    {
        sum += v[i];
        res.push_back(sum);
    }
    return res;
}

int main()
{
    vector<int> v = {10, 20, 30 , 40};
    vector<int> r = PrefixSum(v);
    vector<int> p  = PostfixSum(v);

    for(auto x : p)
        cout << x << " "; //40 70 90 100
    for(auto x : r)
    {
        cout << x << " "; //10 30 60 100
    }

}