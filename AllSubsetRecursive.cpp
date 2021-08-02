/*
The idea is simple, that if there are n number of elements inside an array, there are two choices for every element. Either include that element in the subset or do not include it. 

Algorithm: 
Create a recursive function that takes the following parameters, input array, the current index, the output array or current subset, if all the subsets needs to be stored then a vector of array is needed, if the subsets need to be printed only then this space can be ignored.
if the current index is equal to the size of the array, then print the subset or output array or insert the output array into the vector of arrays (or vectors) and return.
There are exactly two choices for very index.
Ignore the current element and call the recursive function with the current subset and next index, i.e i + 1.
Insert the current element in the subset and call the recursive function with the current subset and next index, i.e i + 1.

*/

#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> arr)
int main()
{

}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        
    }
};