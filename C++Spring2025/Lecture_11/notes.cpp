#include <iostream>
using namespace std;


    /*
    
    
    
  -------------------- Constructor and Destructor Inheritance:--------------------------
    - When a derived class is created, the constructor of the base class is called first, followed by the constructor of the derived class.
    - When a derived class is destroyed, the destructor of the derived class is called first, followed by the destructor of the base class.

    you can create a destructor like so;
    */
    class Base {
    public:
        Base() {
            cout << "Base constructor called" << endl;
        }
        ~Base() {   // destructor. The ~ symbol is used to define a destructor in C++
            cout << "Base destructor called" << endl;
        }
    };
    /*
    ----------------------Virtual Destructor:-------------------------------------------
    - A virtual destructor is a destructor that is declared with the virtual keyword. It is used to ensure that the correct destructor is called when an object is deleted through a base class pointer.
    - If a base class has a virtual destructor, the derived class's destructor will also be called when the object is deleted through a base class pointer.
    - This is important for proper memory management and to avoid memory leaks.
    - If a base class does not have a virtual destructor, the derived class's destructor will not be called when the object is deleted through a base class pointer, which can lead to memory leaks and undefined behavior.
    - To declare a virtual destructor, you simply add the virtual keyword before the destructor declaration in the base class. 
    */
    class Base {
    public:
        Base() {
            cout << "Base constructor called" << endl;
        }
        virtual ~Base() {   // virtual destructor
            cout << "Base destructor called" << endl;
        }
    };

    /*
    -------------------------Template Functions:--------------------------------
    - Template functions are functions that can work with any data type. They are defined using the template keyword and can be used to create generic functions that can operate on different types of data.
    - They are the equivalent of generics in Java or C#.
    - Template functions are defined using the template keyword followed by the type parameter in angle brackets.

    This is the syntax for defining a template function:
*/
    template <class T>  // This is the syntax for defining a template function. 
    void functionName(T arg) {
        // function body
    }
    /*
    - The type parameter T can be replaced with any data type when the function is called. The compiler will generate the appropriate code for the specific data type used in the function call.
    
    */
    






    
