#include<bits/stdc++.h>
using namespace std;

void kthElement(vector<int> v, int k)
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    for(int i=0 ; i<v.size(); i++)
    {
        maxi.push(v[i]);
        mini.push(v[i]);
    }

    while(k != 0)
    {   
        cout << maxi.top() << " ";
        maxi.pop();
        mini.pop();
        k--;
    }
    //cout << " max ele: " << maxi.top() << "\n";
    cout << " min ele: " << mini.top() << "\n";



}
int main()
{
    vector<int> v = {1, 5, 3, 2, 8, 13, 7};
    int k = 2;
    kthElement(v, k);

}
