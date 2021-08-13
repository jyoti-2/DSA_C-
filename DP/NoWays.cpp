#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> v, int k)
{   
    int n = v.size();
    k = k%n;
    vector<int> res;

    for(int i=0; i <v.size(); i++)
    {
        if(i < k)
            res.push_back(v[n+i-k]);
        else
        res.push_back(v[i-k]);
    }
    return res;
}
int main()
{
    vector<int> v = {1, 2,3, 4, 5, 6};
    int k ;
    cin >> k;
    vector<int> res;
    res = rotate(v, k);

    for(auto x : res)
    {
        cout << x << " ";
    }


}