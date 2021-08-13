/* 
To convert a number to a string, use to_string. To concatenate strings, you can simply use +:


*/



#include<bits/stdc++.h>
using namespace std;

string Compression(string s)
{
    map<char, int> m;
    string res ="";

    for(int i=0; i<s.size(); i++)
    {   
        m[s[i]]++;
    }
    for(auto x : m)
    {   
        string freq = to_string(x.second);
        res += freq;
        res.push_back(x.first);
    }
    if(res.size() >= s.size())
        return s;
    else
        return res;
}
// 
int main()
{
    string s;
    cin >> s;
    cout << Compression(s) << "\n";
    return 0;
}