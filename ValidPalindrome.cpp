#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "jyoti kumari hello";
    string co;
    co = s;
    remove(co.begin(), co.end(), ' '); // remove all the spaces

    for(auto x : s)
    cout << x;

    cout << "\n";

    for(auto x : co)
    cout << x ;

    return 0;
}

/*
jyoti kumari hello
jyotikumarihellolo
*/