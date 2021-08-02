#include<bits/stdc++.h>
using namespace std;

int reversebits(int n)
{
    int rev = 0;
    while(n>0)
    {
        rev = rev << 1;
        if(n&1 == 1)
            rev = rev ^1;
        n = n >> 1;
    }
    return rev;
}


int main()
{
    int n;
    cin >> n;
    cout << reversebits(n);
    return 0;

}