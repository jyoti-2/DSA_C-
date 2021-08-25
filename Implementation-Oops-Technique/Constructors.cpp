/*
Special type of member function of a class which initializes objects of a class. 
Automatically called when object(instance of class) created. 
Special member function of the class because it does not have any return type.
must be placed in public section of class.
If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body)

CONSTRUCTORS:

1.DEFAULT Constructor- Team()
2.PARAMETERIZED Constructor- Team(int a) => these arguments help initialize an object when it is created.
3.COPY Constructor- Team(const Team &t)


Uses of Parameterized constructor: 
It is used to initialize the various data elements of different objects with different values when they are created.
It is used to overload constructors.
A copy constructor is a member function which initializes an object using another object of the same class

Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case

Can we have more than one constructor in a class?
       Yes, It is called Constructor Overloading.

*/

#include <iostream>
using namespace std;
 
class construct
{
public:
    int a, b;
 
    // Default Constructor
    construct()
    {
        a = 10;
        b = 20;
    }
};
int main()
{
    construct c; // called automatically
    cout << c.a << " " << c.b << "\n"; // 10  20

}
 