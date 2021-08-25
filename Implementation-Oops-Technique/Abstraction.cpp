#include<bits/stdc++.h>
using namespace std;


/*
Abstraction means displaying only essential information and hiding the details.
Abstraction using classes: Class helps us to group data members and member functions using available access specifiers
Abstraction in header files- ex: consider the pow() method present in math.h header file. Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating power of numbers.

Abstraction using access specifiers: it enforce restriction on class members
Members declared as public in a class, can be accessed from anywhere in the program.
Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of code outside the class.

Advantages of Data Abstraction:

Helps the user to avoid writing the low level code
Avoids code duplication and increases reusability.
Can change internal implementation of class independently without affecting the user.
Helps to increase security of an application or program as only important details are provided to the user.

*/

class Abstraction{
    private:
        int a, b;
    public:
        void set(int x, int y)
        {
            a = x;
            b = y;   
        }

        void display()
        {
            cout << a << " "<< b <<" ";
        }
};
int main()
{
    Abstraction ab;
    ab.set(10, 20);
    ab.display();
    return 0;

}