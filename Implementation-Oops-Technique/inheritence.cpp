#include<bits/stdc++.h>
using namespace std;

class Account{
    public:
    int salary = 2000;
};

class Amount : public Account{ // single level inheritence
    public:
    int bonus = 500;
    int total_salary = bonus + salary;
};

class expenditure : public Amount{ // multi level inheritence
    public:
    int expend = total_salary-salary;
};


int main()
{
    Amount a;
    cout << a.total_salary<< "\n"; // 2500

    expenditure e;
    cout << e.expend;
    return 0;

}