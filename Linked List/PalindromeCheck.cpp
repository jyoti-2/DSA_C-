#include<bits/stdc++.h>
using namespace std;

bool palindromecheck(string s)
{   
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i] != s[n-1-i])
        {
            return false;
            break;
        }
        
    }
        return true;

}
int main()
{
    string s;
    cin >> s;

    cout << s << "\n";
    reverse(s.begin(), s.end()); // it overwrites the value of s with reversed s
    cout << s << "\n";

    if(palindromecheck(s))
        cout << "yes" << " ";
    else
        cout << "No" << " ";

}