#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "123456";
    int sum = 0;
    for(int i=0; i<s.size(); i++)
    {
        sum += s[i] - '0';
    }
    cout << sum << " "; // 21
}