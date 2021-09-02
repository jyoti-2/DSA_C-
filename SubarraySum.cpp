#include<bits/stdc++.h>
using namespace std;

int SubarraySum(vector<int> v, int k)
{  
    int sum = 0;
    int n = v.size();

    if(n < k )
    {
        return -1;
    }
    for(int i=0 ;i<k; i++)
    {
        sum += v[i];
    }

    int win_sum = sum;

    for(int j = k; j<n; j++)
    {
        win_sum = win_sum + v[j] - v[j-k];
        sum = max(win_sum, sum);
    }
    return sum;
}
int main()
{
    vector<int> v = {1, 4, 2, 10, 3, 3, 1, 0, 20};
    int k = 4;

    cout << SubarraySum(v, k);

}