#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "a";
    if(s.size() == 1)
    cout << s ;

    int l = 0;
    int r = s.size()-1;

    while(r > l)
    {
        //int m = (l+r)/2;
        swap(s[l], s[r]);
        l++;
        r--;
    }

    cout << s ;
}