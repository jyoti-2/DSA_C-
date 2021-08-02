#include<bits/stdc++.h>
using namespace std;

// void decToBin(int n)
// {   
//     vector<int> v;
//     int rem = 0;
//     while(n >0)
//     {
//         rem = n%2;
//         v.push_back(rem);        
//         n = n/2;
//     }
//     reverse(v.begin(), v.end());
//     for(auto x:v)
//     {
//         cout << x;
//     }
// }

// using bitwise operatot - faster than arithmetic operator
void decToBin(int n)
{
    // size of int is assumed to be 32 bits
    for(int i=31; i>=0; i--)
    {
        int k = n >> i;
        if(k & 1)
            cout << "1";
        else
            cout << "0";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    decToBin(n);
   
    return 0;    
}