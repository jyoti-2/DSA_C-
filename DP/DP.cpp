#include<bits/stdc++.h>
using namespace std;
int lookup[100];
void initialize()
{
    int i;
    for(int i=0; i<100; i++)
        lookup[i] = 0;
}
int fibonacci(int n)
{   
    //Recursive => TC- O(2^n) each function calls itself twice unless it has been recursed n times, SC- O(1)
     if(n <= 1)
         return n;
     else
        return fibonacci(n-1) + fibonacci(n-2);

    // Memorization - TOP Down, SC- O(n), TC - O(n)
    initialize();
    if(lookup[n] == 0)
    {
        if(n <= 1)
            lookup[n] = n;
        else
            lookup[n] = fibonacci(n-1) + fibonacci(n-2);
    }
    return lookup[n];


    // BOTTOM UP - TC- O(n), SC- O(n)
    int f[n+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    for(i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];

}
int main()
{
    int n = 7;
    cout << fibonacci(n) << " \n";
    return 0;

}