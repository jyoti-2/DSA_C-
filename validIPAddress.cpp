#include<bits/stdc++.h>
using namespace std;

bool valid_temp(string tem)
{
    stringstream geek(tem);
        int x;
        geek >> x;
    if (!(x >= 0 && x <= 255));
        return false;

    for(int i=0 ;i<tem.size(); i++)
    {  
        if((tem[i] >= '0' and tem[i] <= '9') == false)
            return false;
        
        
        tem.clear();
    }
}
bool valid(string s)
{   
    int count = 0;
    string tem = "";

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '.')
        {   
            count++;
            valid_temp(tem);            
        }
        else
        {
            tem += s[i];
        }
    }
valid_temp(tem);

    if((count) != 3)
    return false;

    return true;

}


int main()
{
    string s = "525.16.100.1";
    cout << valid(s);
    return 0;
}