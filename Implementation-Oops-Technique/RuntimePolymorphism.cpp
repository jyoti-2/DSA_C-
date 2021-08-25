#include<bits/stdc++.h>
using namespace std;

/*
Runtime Polymorphism: achieved by Function Overriding.
Function overriding on the other hand occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

virtual function is a member function which is declared in the base class using the keyword virtual and is re-defined (Overriden) by the derived class.
Polymorphism means the ability to take many forms. It occurs if there is a hierarchy of classes which are all related to each other by inheritance.

*/

// function Overloading
class Base
{
    public:
        virtual void print()
        {
            cout << " Base class print function" << "\n";
        }
        void show()
        {
            cout << "Base class show function" << "\n";
        }
};

class Derived : public Base
{
    public:
        void print()
        {
            cout << "derived class print function" << "\n";
        }
        void show()
        {
            cout << " derived class show function" << "\n";
        }
};
/*
Runtime polymorphism is achieved only through a pointer (or reference) of base class type. Also, a base class pointer can point to the objects of base class as well as to the objects of derived class

*/
int main()
{
    Base *bpt;
    Derived d;
    bpt = &d;

    // virtual function, binded at runtime (Runtime polymorphism)
    // derived class’s function is called using a base class pointer.
// Late binding(Runtime) is done in accordance with the content of pointer (i.e. location pointed to by pointer) and Early binding(Compile time) is done according to the type of pointer,

    bpt->print(); // derived class print function

    // Non-virtual function, binded at compile time
    bpt->show(); // Base class show function
    return 0;
}

/*
Virtual functions allow us to create a list of base class pointers and call methods of any of the derived classes without even knowing kind of derived class object. 

NOTE:
If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived class, functions are automatically considered as virtual functions in the derived class.

*/