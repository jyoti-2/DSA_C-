#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "12345";
    s += '9';
    s.push_back('6'); // 123456
    cout << s.back() << " \n"; // 6
    s.pop_back();
    cout << s << "\n"; // 12345

    int d = 0;
    d = s.back() - '0'; 
    int e = s.back() + '0';
    cout << d << "\n" << e; // 5
    return 0;
}



class Solution {
public:
    // num1 = "456", num2 = "77"
    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0, sum = 0;
        while (!num1.empty() || !num2.empty()) 
        {
            int d1 = 0;
            if (!num1.empty())
            {
                d1 = num1.back() - '0'; // 6 | 5
                num1.pop_back();
            }
            
            int d2 = 0;
            if (!num2.empty()) 
            {
                d2 = num2.back() - '0'; //7 |7
                num2.pop_back();
            }
            
            sum = d1 + d2 + carry; // 13 | 12
            carry = (sum >= 10) ? 1 : 0; // 1 | 1
            res += (sum % 10) + '0'; // 3 | 
        }
        
        if (carry ) {
            res += '1';
        }
        
        reverse(begin(res), end(res));
        
        return res;
    }
};


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    
    int q;
    cin>>q;
    
    set <int> s;
    
    for(int i=0;i<q;i++)
    {
        int y; // type - 1, 2, 3
        int x;
        cin>>y>>x;
        
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else
        {
            if(s.end()==s.find(x))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl; // Yes if the number is present in the set
        }
    }
    return 0;
}

// Sample Input

// 8
// 1 9
// 1 6
// 1 10
// 1 4
// 3 6
// 3 14
// 2 6
// 3 6
// Sample Output

// Yes
// No
// No