#include<bits/stdc++.h>
using namespace std;

void BinToDec(int n)
{
    vector<int> v;
    v.push_back(n);
    int num = v.size();
    int sum= 0;
    for(int i=0; i<num; i++)
    {
        int dig = v[i]*pow(2, num-1-i);
        sum += dig;
    }
    cout << sum ;
}
int main()
{
    int n;
    cin >> n;
    BinToDec(n);
}