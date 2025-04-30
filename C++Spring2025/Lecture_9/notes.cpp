#include <iostream>
// Continuing from the inheretance Lecture.
int main() {

    //-----------------Struct VS Class-----------------
    /*
        struct: A struct is a user-defined data type that allows you to combine data items of different kinds.
        class: A class is a user-defined data type that allows you to combine data items of different kinds and also provides methods to manipulate that data.

        In C++, struct and class are very similar — they both define user-defined types that can have fields (data members) 
        and functions (member functions). The main difference between them is the default access modifier.

        For struct, variables and functions are public by default. 
        For Classes, variables and functions are private by default. 

        struct Animal {
        }

        class Animal {
        }


    --------------------------'this' keyword---------------------------------------------------

    What does the 'this' keyword mean?

    In C++, the 'this' keyword is a pointer that refers to the current object-- the instance
    of the class on which a member function is being called.

    This is essentially the same way as the 'this' keyword from java. It allows you to
    differentiate from the parameter and the variable that belongs to the class.alignas

class Person {
    string name;

public:
    Person(string name) {
        this->name = name;  // Resolves conflict between parameter and member
    }

    void greet() {
        std::cout << "Hi, I'm " << this->name << std::endl;
    }
};

What else is the keyword 'this' used for?

There's another way it is used for and it's called "Method chaining". 

You are already familiar with 'method chaining'. It's basically calling methods after another method like this;

Animal cat();
cat.getName().display();  --> A method being called after another. This is method chaining.alignas

The 'this' keyword comes into play. Here's how;

The this keyword is essential for method chaining in C++, because it allows a member function to return a 
pointer (or reference) to the current object, enabling calls to continue on that same object.


--------------------------Exceptions----------------------------------------------------------------

We already know what exceptions are. Exceptions are how a program handles errors or unusual situations
without crashing. Exceptions are used with try-catch blocks to help you catch errors. 

For example, Instead of your program breaking when something goes wrong, you can:
    1. throw an exception to signal a problem,
    2. catch it and decide what to do about it.

here's a common example of diving by zero;

#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw "Cannot divide by zero!";  
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
}

throw - you use this to signal an error
try - wrap risky code in this block,
catch - handle the error here. Maybe display a message to the user to signal them that something went wrong.

------------------Virtual Functions--------------------------------

Virtual functions are a key feature of C++ that enable polymorphism.

What exactly is virtual functions?

Virtual Functions: In C++, a virtual function is a member function that you expect to be overridden in derived classes.
It allows polymorphism, which means you can call a function on a pointer or reference to a base class,
and it will execute the the correct version of the function based on the actual object type, not the pointer type.

Here is an example; 

Consider you have these two classes: Animal and Dog. Animal is the base class and dog is the derived class from animal like so;

Animal class {
    public:
        void makeNoise() {
            std::count << "Animal makes noise" << std::endl;
        }
} 

Dog class : public Animal {
    public:
        void makeNoise() {
            std::cout << "Woof! Woof!" << std::endl;
        }
        
}

- They both have a method makeNoise but the Dog class overrides that method. No problem so far..

int main() {
    Animal* animal = new Animal();
    

    */

    

    return 0;
}
