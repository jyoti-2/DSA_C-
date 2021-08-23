#include<bits/stdc++.h>
using namespace std;

// Tokenizing a string means splitting a string with respect to some delimiters.

int main()
{
    string s = "Anurag good boy ab";
    string tem = "";

    string str = "1232312";
    int x = stoi(str);
    cout << x << "\n";    

    queue<string> word;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            word.push(tem);
            tem.clear();
        }
        else
        tem += s[i];
    }
    word.push(tem);
    int sum = 0;
    sum += tem[0] + tem[1]; // 195
    cout << sum << "\n";

    while(!word.empty())
    {
        cout << word.front() << " ";
        word.pop();
    }

    return 0;
}