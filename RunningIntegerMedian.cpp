#include<bits/stdc++.h>
using namespace std;

//TC - O(nlogn) SC - O(n)
double medians(int arr[], int n)
{
    priority_queue<double> mx;
    priority_queue<double, vector<double> , greater<double>> mi;


    for(int i= 0; i<n; i++)
    {
        if(mx.empty() || mx.top() > arr[i])
            mx.push(arr[i]);
        else
            mi.push(arr[i]);
        
        if(mx.size() > (mi.size()+1))
        {
            mi.push(mx.top());
            mx.pop();
        }
        else if(mi.size() > (mx.size()+1))
        {
            mx.push(mi.top());
            mi.pop();
        }

        double ans;
    if(mx.size() == mi.size())
    {
        ans = (mx.top()+mi.top())/2;
        cout << ans << "\n";
    }
    else if(mx.size() > mi.size())
    {   
        ans = mx.top();
        cout << mx.top() << "\n";
    }
    else
    {   
        ans = mi.top();
        cout << mi.top() << "\n";
    }
    
    }
    
        
    
}
int main()
{
    int arr[] = {5, 3, 10, 15, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    medians(arr, n);
    return 0;
}