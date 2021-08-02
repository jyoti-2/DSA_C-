#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int count = 0;
    for(int i=0; i<sizeof(int)*8; i++)
    {
        if((n&(1<<i))!= 0) // count set bits
            count++;
    }
    cout << count << "\n";

    int c = sizeof(int);
    cout << c << " ";
    return 0;
}

