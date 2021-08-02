/*
i/p - set of positive integers
o/p = all subsets

This method is very simple. It is based on bit-masking. The number of subsets of an array is 2N where N is the size of the array. We basically generate N-bit binary string for all numbers in the range 0 to 2N – 1 and print array based on the string. If the ith index of the binary string is 1, that means the ith index of the array is included in the subset.
*/

#include<bits/stdc++.h>
using namespace std;

int SubsetIterative(int arr[], int n)
{   
    int m = pow(2, n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i&(1 << j)) != 0)
            cout << arr[j] << " ";
        }

        cout << "\n";
    }
}

int main()
{   
    int n=3;
    int arr[n] = {1, 2, 3};
    SubsetIterative(arr, n);
    return 0;

}

// Time complexity - O(n2^n)

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int m = pow(2, n);
        
        vector<vector<int>> res;
        vector<int> temp;
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
                if((i&( 1 << j)) != 0)
                    temp.push_back(nums[j]);   

                res.push_back(temp);
                temp.clear();
              
        }
               
    return res;
    }
};