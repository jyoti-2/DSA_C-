#include<bits/stdc++.h>
using namespace std;

bool PrimeCheck(int num)
{
    if(num<2)
        return false;
    int sqr = sqrt(num);
    for(int i=2; i<sqr; i++)
    {
        if(num % i == 0)
        return false;
    }
    return true;    
}
int main()
{
    int num;
    cin >> num;
    cout << PrimeCheck(num);
    return 0;
}