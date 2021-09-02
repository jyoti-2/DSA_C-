#include<bits/stdc++.h>
using namespace std;

int sums(int num)
{
    int t = 0;
    while(num > 0)
    {
        t += num%10;
        num /= 10;
    }
    return t;
}

int recursion(int num)
{
    while(num >= 10)
    {
        num = sums(num);
    }
    return num;
}
int main()
{
    int num = 5;
    cout << recursion(num);

}