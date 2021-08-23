
#include<bits/stdc++.h>
using namespace std;

string Solution(string &S) {
    int n = S.size();
    
    

    int l = 0;
    int r = l+2;

    for(int i=0; i<n; i++) 
    {   
        
        if(S[i] == '?' )
        {  
            
            if((S[i-1] == 'a' && S[i+1] == 'a'))
                S[i] = 'b';
            else if((S[i-1] == 'a' || S[i+1] == 'b' ))
                S[i] = 'a';
            else if(S[i-1] == 'b' && S[i+1] == 'b')
                S[i] = 'a';
            else if( S[i-1] == 'b' || S[i+1] == 'b')
                S[i] = 'b'; 
            else if(S[i+1] != S[i+2])
            S[i] = 'a'; 
            else if (S[i+1] == S[i+2] == 'a')
            S[i] == 'b';
            else
            S[i] == 'a';

        }
    }
    return S;
}

int main()
{
    string s;
    cin >> s;
    cout << Solution(s) << "\n";
    return 0;
}
