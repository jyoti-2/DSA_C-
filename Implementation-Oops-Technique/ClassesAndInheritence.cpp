#include<bits/stdc++.h>
using namespace std;

class Person
{  
    int id; // all members are private by default
    char name[20]; 

    public:
   void aboutMe(){
        cout << "I am a Person" << "\n";
    }
};

class Student: public Person
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