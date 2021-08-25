/*
Destructor is an instance member function which is invoked automatically whenever an object is going to destroy. Means, a destructor is the last function that is going to be called before an object is destroyed.

Destructor function is automatically invoked when the objects are destroyed.
It cannot be declared static or const.
The destructor does not have arguments.
It has no return type not even void.
An object of a class with a Destructor cannot become a member of the union.
A destructor should be declared in the public section of the class.
The programmer cannot access the address of destructor.

A destructor function is called automatically when the object goes out of scope: 
(1) the function ends 
(2) the program ends 
(3) a block containing local variables ends 
(4) a delete operator is called  

there can only one destructor in a class with classname preceded by ~, no parameters and no return type.

*/

class String {
private:
    char* s;
    int size;
 
public:
    String(char*); // constructor
    ~String(); // destructor
};
 
String::String(char* c)
{
    size = c.size();
    s = new char[size + 1];
    strcpy(s, c);
}
String::~String() { delete[] s; }


