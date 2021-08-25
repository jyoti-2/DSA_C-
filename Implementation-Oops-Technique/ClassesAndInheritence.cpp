#include<bits/stdc++.h>
using namespace std;

// parent class/ base class
class Person
{  
    int id; // all members are private by default
    char name[20]; 

    public:
    void aboutMe(){
        cout << "I am a Person" << "\n";
    }
};

// derived class
class Student: public Person// visibility mode specifies whether the features of the base class are publicly inherited or privately inherited.
{
    public:
    void aboutMe(){
        cout << "I am a student" << "\n";
    }
};

int main()
{
    Student *s = new Student();
    Person *p;
    p->aboutMe();// print - I am a person (because the function aboutMe is resolved at compile time, in a mechanism known as static binding.)
    s->aboutMe(); // print - I am a student
    delete s; // delete allocate memory
    return 0;

}

/* 
 Modes of Inheritance
Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class. 

The private members in the base class cannot be directly accessed in the derived class, while protected members(advantage of data hiding) can be directly accessed

Single level inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
Multilevel inheritance is a process of deriving a class from another derived class.
Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.
Hierarchical Inheritance: more than one sub class is inherited from a single base class. i.e. more than one derived class is created from a single base class.
Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance.
*/
class A
{
public:
    int x;
protected:
    int y;
private:
    int z;
};
 
class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

