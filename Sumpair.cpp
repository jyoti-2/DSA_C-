#include<bits/stdc++.h>
using namespace std;

int PairSum(vector<int> v, int n )
{   
    int count = 0;
    map<int, int> m;
    for(int i=0; i<v.size(); i++)
    {
        m[v[i]]++; // freq of each ele
    }

    for(int i=0; i<v.size(); i++)
    {
        if(m.find(n-v[i]) != m.end())
        count++;
    }
    return count/2;
}

// int PairSum(vector<int> v, int n )
// {   
//     sort(v.begin(), v.end());
//     int l =0; 
//     int r = v.size()-1;
//     int count = 0;
//     int sum = 0;


//     while(l<r)
//     {   
//         sum = v[l] + v[r];
//         if(sum > n)
//         {
//             r--;
//         }
//         else if(sum < n)
//         {
//             l++;
//         }
//         else
//         {
//             count++;
//             l++;
//             r--;
//         }
        
//     }
//     return count;
// }
int main()
{
    vector<int> v ={ 2, 3, 2, 5, 6, 8};
    int n = 8;
    cout << PairSum(v, n);
}