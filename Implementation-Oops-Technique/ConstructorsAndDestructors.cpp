/*
The constructor of a class is automatically called upon an object's creation. If no constructor is defined, the compiler automatically generates one called the Default Constructor. Alternatively, we can define our own
constructor.
If you just need to initialize primitive types, a simple way to do it is this:

Person(int a) {
id = a;
}
This works for primitive types, but you might instead want to do this:
Person(int a) : id(a) 
{
}
The data member id is assigned before the actual object is created and before the remainder of the
constructor code is called. This approach is necessary when the fields are constant or class types.

The destructor cleans up upon object deletion and is automatically called when an object is destroyed. It
cannot take an argument as we don't explicitly call a destructor.
-Person() {
delete obj; // free any memory allocated within class
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

}