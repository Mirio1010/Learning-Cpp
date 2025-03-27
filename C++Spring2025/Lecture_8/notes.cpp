#include <iostream>
using namespace std;

// OBJECT ORIENTED PROGRAMMING


int main() {
  /*
       -----Constructors-----
         - Special member function that is called when an object is created. It is used to initialize the object of a class and pass in default values that object should have.
         - It has the same name as the class.
         - If you don't define a constructor, the compiler will create a default constructor for you, just like java. 
         - you can have multiple constructors in a class, as long as they have different parameters.

         Ex: 

         class Rectangle {
            private:
                int width, height;
            public:
                Rectangle(); non parameterized constructor
                    
                Rectangle(int w, int h); parameterized constructor

                Rectangle(const Rectangle &r1); shallow copy constructor
                   
                int area() {
                    return width * height;
                }
            };  // Implementations of constructors are below
                Rectangle::Rectangle() {  // Default constructor
                    width = 5;
                    height = 5;
                }
                Rectangle::Rectangle(int w, int h) {  // Parameterized constructor
                    width = w;
                    height = h;
                }
                Rectangle::Rectangle(const Rectangle &other) { // Shallow copy constructor. We are passing the object by reference. 
                    width = other.width;
                    height = other.height;
                }

        - Constructors can be called in the following ways:
            - Rectangle r1; // Default constructor
            - Rectangle r2(10, 20); // Parameterized constructor
            - Rectangle r3 = r2; // Shallow copy constructor
            - Rectangle r4(r2); // Shallow copy constructor



        Let's now talk about deep copy constructors.

        A deep copy constructor is used to create a new object and then copy the values of the object passed to it. 
        This is useful when you want to create a new object and then copy the values of the object passed to it.
        This is different from the shallow copy constructor, which just copies the values of the object passed to it.
        A deep copy copies the address of the object passed to it, and then creates a new object with the same values as the object passed to it.

        Example of deep copy constructor:
        (need to do)


        ---------------Access modifiers----------------
        - Access modifiers are used to control the access of the members of a class.
        - There are three types of access modifiers in C++:
            - Public: Members of a class that are declared as public can be accessed from outside the class.
            - Private: Members of a class that are declared as private can only be accessed from within the class.
            - Protected: Members of a class that are declared as protected can be accessed from within the class and from classes that inherit from the class.
         
        Example:
        private:
            int a;
        protected:
            int b;
        public:
            int c;

        ---------------Inheritance----------------
        - Inheritance is a mechanism in which one class acquires the properties and behavior of another class.
        - The class that is inherited from is called the base class, and the class that inherits from the base class is called the derived class.
        - Inheritance is used to create a new class that is based on an existing class.

        Example:
        class Base {
            public:
                void display() {
                    cout << "Display from base class" << endl;
                }
        };

        class Derived : public Base {   // This is the C++ syntax for inheritance. It's java equivalent is "class Derived extends Base" using the "extends" keyword.
            public:
                void display() {
                    cout << "Display from derived class" << endl;
                }
        };

        There are different types of inheritance in C++:
        - Single inheritance: A class inherits from only one base class.
        - Multiple inheritance: A class inherits from more than one base class.
        - Multilevel inheritance: A class inherits from a class that inherits from another class.
        - Hierarchical inheritance: A class inherits from more than one derived class.
        - Hybrid inheritance: A combination of two or more types of inheritance.

        Look at "types of inheritance" image in the Lecture_8 folder for a visual representation of the different types of inheritance.

        ---------------Visibility mode of Inheritance----------------

        - In C++, there are three types of visibility modes of inheritance:
            - Public: The public members of the base class are inherited as public members of the derived class.
            - Protected: The public and protected members of the base class are inherited as protected members of the derived class.
            - Private: The public and protected members of the base class are inherited as private members of the derived class.


      ------------------Base class paramaterized constructor----------------
      A class can have a parameterized constructor. If a class has a parameterized constructor, then the derived class must call the parameterized constructor of the base class.
      (need to continue)
  
  */

    return 0;
}