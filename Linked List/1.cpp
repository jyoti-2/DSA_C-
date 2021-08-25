#include<bits/stdc++.h>
using namespace std;

vector<string> subsequence(string str, int n, int index = -1)
{   
    string curr = "";
    vector<string> res;
    if(!curr.empty())
    {
        res.push_back(curr);

    }

    for(int i=index+1; i<n; i++)
    {
        curr += str[i];
        subsequence(str, n, i);
        curr = curr.erase(curr.size()-1);
    }
    return res;
}
int main()
{
    string str = "abcde";
    int n = str.size();
    vector<string> s = subsequence(str, n);

    for(auto x : s){
        cout << x << " ";
    }
    return 0;
}