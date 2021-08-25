#include<bits/stdc++.h>
using namespace std;

/*
Polymorphism means having many forms.Ability of a message to be displayed in more than one form

Polymorphism:
1. Compile time - implemented using Function overloading and Operator overloading
2. Runtime - implemented using virtual function
*/

// Function Overloading: When there are multiple functions with same name but different parameters then these functions are said to be overloaded. 
// Functions can be overloaded by change in number of arguments or/and change in type of arguments
class FunctionOverloading{
    public:
        void func(int x)
        {
            cout << x << "\n";
        }   
        void func(double x)
        {
            cout << x << "\n";
        } 
        void func(double x, double y)
        {
            cout << x << " " << y <<"\n";
        } 
};
int main()
{
    FunctionOverloading f;
    f.func(2);
    f.func(1.9797);
    f.func(2.12312, 4.997);
    return 0;

}

// Operator overloading - C++ also provide option to overload operators. For example, we can make the operator (‘+’) for string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. So a single operator ‘+’ when placed between integer operands , adds them and when placed between string operands, concatenates them.

#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real;
    int img;

    public:
        // constructor
        Complex(int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }

        //automatically called when '+' is used in between two Complex objects
// Operator functions are same as normal functions. The only differences are, name of an operator function is always operator keyword followed by symbol of operator and operator functions are called when the corresponding operator is used.

        Complex operator + (Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.img = img + obj.img;
            return res;
        }
        void print()
        {
            cout << real << " " << '+ i' << img << "\n";
        }
};
// here the operator is made to perform addition of two imaginary or complex numbers.
int main()
{
    Complex c1(10, 20) , c2(2, 5);
    Complex c3 = c1 +c2;
    c3.print(); //  12 + i25
}