#include <iostream>
using namespace std;

// LECTURE 4: Pointers Part 2



int main() {

    // Quick recap of what pointers represent and how they work.
    int x = 5;
    int *point = &x;

    cout << &point << endl; // This will print the address of the pointer variable point. i.e. the address of the pointer variable itself.
    cout << point << endl; // This will print the address of the object it points to. i.e. the address of x.
    cout << *point << endl; // This will print the value of the object it points to. i.e. the value of x.

    // Here are more examples of Pointers
    double dVal;
    double *dPtr = &dVal; // dPtr is a pointer to a double. It points to dVal.
    double *dPtr2 = dPtr; // dPtr2 is a pointer to a double. It points to the same object as dPtr.
    // if you were to write: double *dPtr2 = &dPtr; This would be wrong. dPtr is a pointer to a double. dPtr2 is a pointer to a double. You cannot have a pointer to a pointer to a double. This is not allowed.

    // how to write null pointers, these all mean the same thing.
    int *p1 = nullptr; // p1 is a null pointer. It does not point to any object.
    int *p3 = NULL; // p3 is a null pointer. It does not point to any object.
    int *p2 = 0; // p2 is a null pointer. It does not point to any object.


    // IMPORTANCE OF POINTERS IN C++:
    // - Pointers are used to dynamically allocate memory. This is very important in C++ programming.
    // - Pointers are used to pass-by-reference in functions. 
    // - Pointers are used to create data structures like linked lists, trees, graphs, etc.
    // - Pointers are used to create arrays.
    // - Pointers are used to create objects in C++.
    // - Concept of smart pointers in C++. (More on this later on in the course)

    // POINTERS AND CONST
    // - like references, pointers can also define pointers that point to const or non-const types/
    // - it is also possible to declare pointers that can access the object they point to.

    //EXAMPLES:

    const double pi = 3.14;

    double *ptr = &pi; // This is wrong. You cannot have a pointer to a const double that is not a pointer to a const double.
    const double *cptr = &pi; // This is allowed. ptr2 is a pointer to a const double. pi is a const double. This is allowed.

    *cptr = 42; // This is wrong. You cannot change the object a pointer to const refers to. pi is a const double. cptr is a pointer to a const double.
    double dval = 3.14;
    
    cptr = &dval; // This is allowed. You can change the object a pointer to const refers to. cptr is a pointer to a const double. dval is a double. This is allowed.





} 