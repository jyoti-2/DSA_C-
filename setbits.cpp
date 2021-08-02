#include<bits/stdc++.h>
using namespace std;

void SetBits(int n)
{
    int count = 0;
    vector<int> res;
    if(n == 0)
    res.push_back(0);

    for(int i=1; i<=n; i++)
    {
        while(i != 0)
        {
            i = i&(i-1);
            count++;
        }
        res.push_back(count);
        count=0;
    }
   for(int i=0; i<=n; i++)
    {
        cout << res[i] << " ";
    }
}

int main()
{
    int n = 5;
    SetBits(n);
    return 0;
}
