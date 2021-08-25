/*
Copy constructor vs assignment operator in C++:

Copy constructor is called when a new object is created from an existing object, as a copy of the existing object. 
Assignment operator is called when an already initialized object is assigned a new value from another existing object.


*/

#include<bits/stdc++.h>
using namespace std;

class Test
{
    public:
    Test()
    {

    }
    Test(const Test &t) 
    { 
        cout<<"Copy constructor called "<<"\n"; 
    } 
      
    Test& operator = (const Test &t)
    {
        cout<<"Assignment operator called "<<"\n";
        return *this;
    } 

};
int main()
{
    Test t1, t2;
    t2 = t1; // calls assignment operator, same as "t2.operator=(t1);"
    Test t3 = t1; // calls copy constructor, same as "Test t3(t1);"
    return 0;
}
// Assignment operator called 
// Copy constructor called