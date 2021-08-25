#include<bits/stdc++.h>
using namespace std;

/*
Encapsulation is defined as wrapping up of data and information under a single unit.
Encapsulation is defined as binding together the data and the functions that manipulates them.

Encapsulation also lead to data abstraction or hiding. As using encapsulation also hides the data.
In C++ encapsulation can be implemented using Class and access modifiers.
*/

class Encapsulation{
    private:
    int x;
    
    public:
        void set(int a)
        {
            x = a;
        }

        int get()
        {
            return x;
        }
};
int main ()
{
    Encapsulation obj;
    obj.set(21);
    cout << obj.get();
    return 0;
}

/*
the variable x is made private. 
This variable can be accessed and manipulated only using the functions get() and set() which are present inside the class. 
Thus we can say that here, the variable x and the functions get() and set() are binded together which is nothing but encapsulation.*/


