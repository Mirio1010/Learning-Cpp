#include <iostream>
using namespace std;
// Continuing from the previous lecture on Virtual Functions

/*
        There are rules for virtual functions:
        1. The function must be declared in the base class using the keyword virtual.
        2. The function must be overridden in the derived class.
        3. virtual functions cannot be static
        4. virtual functions cannot be friend functions
        5. They are always defined in the base class, and the derived class can override them.
        6. A class may have virtual destructors, but it is not mandatory. 


        study const keyword in methods.alignas


 -----------------------------------------------------------------------------------------------------------
    
    C++ Poluymorphism

    There are two types of polymorphism in C++:
    1. Compile-time polymorphism (also known as static polymorphism or early binding polymorphism)
        - Function overloading (we already know what this is)

        - Operator overloading

        operator overloading is a compile-time polymorphism. It allows us to redefine the meaning of an operator for user-defined data types.
        For example, we can overload the + operator to add two complex numbers or two strings.

        you can override the meaning of the + operator for user-defined data types.
        For example, we can overload the + operator to add two complex numbers or two strings.

        here is an example of operator overloading in C++:

        class Point {
        public:
            int x, y;
            Point(int x, int y) {
                this->x = x;
                this->y = y;
            }
            Point operator+(Point p) {          Here we are overloading the + operator. 

                return Point(x + p.x, y + p.y);
            }
        };
        int main() {
            Point p1(1, 2);
            Point p2(3, 4);
            Point p3 = p1 + p2; // calls the operator+ function
            cout << "p3: (" << p3.x << ", " << p3.y << ")" << endl;
            return 0;
        }
        In this example, we have defined a class Point with two member variables x and y. We have also defined a constructor to initialize these variables.
        We have overloaded the + operator to add two Point objects. The operator+ function takes a Point object as an argument and returns a new Point object with the sum of the x and y coordinates of the two points.
        You can do this for any operator in C++. It works the same way. You can even overload the << operator to print the object. (it works the same way as the + operator but with different syntax) example below:

        class Car {
        public:
            string name;
            int speed;
            Car(string name, int speed) {
                this->name = name;
                this->speed = speed;
            }
            void  operator<<(ostream& COUT, Car& car) { // here we are overloading the << operator
                COUT << "Car name: " << car.name << ", speed: " << car.speed;
            }
        }; 

        int main() {
            Car car("BMW", 200);
            cout << car << endl; // calls the operator<< function
            return 0;
        }
        
        now, when you do cout << car, it will call the operator<< function and print the car object. Here's the output:
        Car name: BMW, speed: 200









    2. Run-time polymorphism (also known as dynamic polymorphism or lazy binding polymorphism)
        - function overriding using virtual functions

        Abstract classes and pure virtual functions:

        An abstract class is a class that cannot be instantiated. It is used to define a common interface for a group of related classes.
        An abstract class can have pure virtual functions, which are functions that have no implementation in the base class. They must be overridden in the derived class.

        here is an example of an abstract class in C++:
        class Shape {
        public:
            virtual void draw() = 0; // pure virtual function
            // The = 0 at the end of the function declaration indicates that this is a pure virtual function.
            // This means that the function has no implementation in the base class and must be overridden in the derived class.
            // If a class has at least one pure virtual function, it is considered an abstract class and cannot be instantiated.
        };

----------------------------------------------------------------------------------------------------------
        Smart Pointers

    what is a smart pointer?

    A smart pointer is an object that acts like a pointer but provides additional features such as automatic memory management and reference counting.
    It's basically a wrapper around a raw pointer that helps manage the memory it points to.

    Smart pointers are used to avoid memory leaks and dangling pointers, which are common problems in C++ when using raw pointers.

    There are three types of smart pointers in C++:
    1. std::unique_ptr: A unique pointer is a smart pointer that owns a dynamically allocated object and ensures that there is only one unique pointer to that object at any given time.
    2. std::shared_ptr: A shared pointer is a smart pointer that allows multiple pointers to share ownership of a dynamically allocated object. It uses reference counting to keep track of how many shared pointers point to the same object.
    3. std::weak_ptr: A weak pointer is a smart pointer that does not affect the reference count of a shared pointer. It is used to break circular references between shared pointers.

NOTE:  As java is managed language that runs on the JVM, it can manage resources on it's own. But C++ is unmanaged language that runs on the OS. So, it cannot manage resources on it's own. So, we need to manage resources on our own. 
    But C++ has smart pointers that can help us manage resources on our own. But we need to use them properly. 
    Smart pointers are not a replacement for raw pointers. They are just a tool to help us manage resources better. 
    We still need to understand how memory management works in C++ and when to use smart pointers and when to use raw pointers.

   this is how you create a unique pointer;----------------------

   int main() {
         int x = 25;
         std::unique_ptr<int> unPtr = std::make_unique<int>(x); // create a unique pointer to an int with value 5
         std::cout << "Value of x: " << *unPtr << std::endl; // dereference the unique pointer to get the value (same as raw pointer)

         // what if you do something like this?
         std::unique_ptr<int> unPtr2 = unPtr; // this will give you an error because unique_ptr cannot be copied. It cannot be shared.

         // if you want to transfer ownership of the unique pointer, you can use std::move
            std::unique_ptr<int> unPtr3 = std::move(unPtr); // transfer ownership of the unique pointer to unPtr3
         return 0;
    }

    This is how you create a shared pointer;-----------------------

    int main() {
        shared_ptr<MyClass> sp1;

        {
            shared_ptr<MyClass> sp2 = make_shared<MyClass>(); // create a shared pointer to an object of MyClass with value 5
            sp1 = sp2; // copy the shared pointer to sp1
            cout << "sp1 use count: " << sp1.use_count() << endl; // prints 2 because both sp1 and sp2 point to the same object
            sp2->greet(); // call the greet function of the object pointed to by sp2
        } // sp2 goes out of scope and is destroyed, but the object is not deleted because sp1 still points to it

        return 0;
    }
    This is how you create a weak pointer;-----------------------


--------------------------------------------------------------------------------------------------------------
    Friend Functions

    A friend function is a function that is not a member of a class but has access to its private and protected members. Here's what I mean:alignas

    class Test {
    private:
        int x;
    protected:
        int y;
    public:
        int z;

    friend void fun(); // friend function declaration 
    }

    void fun() { // friend function definition
        Test t;
        t.x = 10; // can access private member x
        t.y = 20; // can access protected member y
        t.z = 30; // can access public member z
    }

    It can access all the members of the class, including private and protected members because it is a friend function. It's a friend of the class.

    But it is not a member of the class. So, it cannot be called using the object of the class. It can be called like a normal function.

    I.e; you cannot do this:
    Test t;
    t.fun(); // this will give you an error because fun is not a member of Test class
    But you can do this:
    fun(); // this will work because fun is a friend function and can be called like a normal function
---------------------------------------------------------------------------------------------------------------
friend class 

    A friend class is a class that has access to the private and protected members of another class. It is similar to a friend function, but it applies to an entire class instead of just a single function.

    Here's an example of a friend class in C++:

    class Test {
    private:
        int x;
    public:
        Test() {
            x = 10;
        }
        friend class FriendClass; // FriendClass is a friend of Test
    };

    class FriendClass {
    public:
        void display(Test t) {
            cout << "Value of x: " << t.x << endl; // can access private member x
        }
    };
    int main() {
        Test t;
        FriendClass f;
        f.display(t); // calls the display function of FriendClass
        return 0;
    }
----------------------------------------------------------------------------------------------------------------
Static member of a C++ class

    A static member of a class is a member that is shared by all objects of the class. It is not tied to any specific object and can be accessed using the class name instead of an object.

    Here's an example of a static member in C++:

    class Test {
    public:
        static int count; // static member variable
        Test() {
            count++; // increment count for each object created
        }
    };

    int Test::count = 0; // initialize static member variable. This is something you need to do outside the class definition. Its part of the weirdness of C++.

    int main() {
        Test t1;
        Test t2;
        cout << "Number of objects created: " << Test::count << endl; // prints 2
        return 0;
    }

    In this example, we have defined a static member variable count in the Test class. It is shared by all objects of the class. 
    We have also defined a constructor that increments the count for each object created. 
    Finally, we print the value of count using the class name instead of an object.



     
    Static member functions:

    A static member function is a member function that can be called without creating an object of the class. It can only access static member variables and functions of the class.
    Here's an example of a static member function in C++:
    class Test {
    public:
        static int count; // static member variable
        static void displayCount() { // static member function
            cout << "Number of objects created: " << count << endl;
        }
    };
    int Test::count = 0; // initialize static member variable
    int main() {
        Test t1;
        Test t2;
        Test::displayCount(); // calls the static member function without creating an object
        return 0;
    }
    In this example, we have defined a static member function displayCount in the Test class. It can be called without creating an object of the class.
    It can only access static member variables and functions of the class. 
    Finally, we call the displayCount function using the class name instead of an object.


    you cannot use virtual functions in static member functions.

*/





int main() {
    return 0;
}