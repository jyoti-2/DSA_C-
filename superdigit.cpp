#include<bits/stdc++.h>
using namespace std;

int sums(int n)
{   
    int total = 0;
    while(n>0)
    {
        total += n%10;
        n = n/10;
    }
    return total;
}

int superdigit(int n, int k)
{
    string s = to_string(n);
    string temp = s;
    for(int i=0; i<k-1; i++)
    {
        s += temp;
    }
    long long actual = stoi(s);
    while(actual > 10)
    {
        actual = sums(actual);
    }
   
    return actual;
}


int main()
{
    int n = 9875;
    int k = 4;
    cout << superdigit(n, k) << "\n";
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int super(long long x){
    if(x < 10) return x;
    int sum = 0;
    while(x){
        sum += x % 10;
        x /= 10;
    }
    return super(sum);
}


int main() {
    string n; 
    int k; 
    long long p = 0;
    cin>>n>>k; //123  2
     
    for(int i=0; i<n.size(); i++){
        p += n[i] - '0';   // 6
    }
    p *= k; // 12
    int res = super(p); // 3
    cout << res << "\n";
    return 0;
}
