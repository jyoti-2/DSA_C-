/*
arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5
*/

#include<bits/stdc++.h>
using namespace std;

void CheckOcc(int arr[], int n , int target)
{   
    vector<int> res;
    int l = 0;
    int r = n-1;
    while(l < r)
    {
        if(arr[l] == target)
        {
            res.push_back(l);
        }
       if(arr[r] == target)
        {
            res.push_back(r);
        }
        l++;
        r--;
    }
    
        
    
    for(auto x : res)
    cout << x << " ";
}
int main()
{   int n;
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
     n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    CheckOcc(arr, n, target);   

}