#include<bits/stdc++.h>
using namespace std;

// compile time polymorphism - method oerloading/ Operator overloading
int add(int a, int b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{ 
    cout << add(2, 3) << "\n"; // 5
    cout << add(4, 5, 6) << "\n"; // 15
    return 0;
}

// Runtime Polymorphosim - virtual function, pointer
class base
{
    public:
    void fun()
    {
        cout << "base" << "\n";
    }
};

class derived : public base
{
    public:
    void fun()
    {
        cout << "deived" << "\n";
    }
};

