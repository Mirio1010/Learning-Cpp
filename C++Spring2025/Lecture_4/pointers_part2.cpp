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

//------------------------------------------------------------------------------------------------------------------------------------------------
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

   // double *ptr = &pi;  This is wrong. You cannot have a pointer to a const double that is not a pointer to a const double.
   // const double *cptr = &pi; // This is allowed. ptr2 is a pointer to a const double. pi is a const double. This is allowed.

    //*cptr = 42;  This is wrong. You cannot change the object a pointer to const refers to. pi is a const double. cptr is a pointer to a const double.
    double dval = 3.14;

   // cptr = &dval;  This is allowed. You can change the object a pointer to const refers to. cptr is a pointer to a const double. dval is a double. This is allowed.

//------------------------------------------------------------------------------------------------------------------------------------------------
    // CONST POINTERS:
    // - A const pointer is a pointer that cannot change the object it points to.
    // Unlike reference, pointers are objects. They can be const.
    // Like any other constant object, pointers cam also be const.
    // A const pointer must be initialized when it is defined. Once a const pointer is initialized, it cannot be changed to point to another object.

    // SYNTAX:
   // Pointer_Type *const Pointer_Name = &variable;
   // Example below; 

   int errNumb = 0;
   int *const curErr = &errNumb; // this is a const pointer to an integer. curErr is a pointer to an integer. curErr is a const pointer to an integer. curErr cannot change the object it points to. errNumb is an integer. curErr is a const pointer to an integer.

   // what about this?
   const double pi2 = 3.14;
   const double *const pip = &pi2; // pip is a const pointer to a const double. pip is a pointer to a const double. pip cannot change the object it points to. pi2 is a const double. pip is a const pointer to a const double.

//------------------------------------------------------------------------------------------------------------------------------------------------
    // POINTERS Arithmetic:
    // - Pointers can be used in arithmetic expressions. Here are some examples of pointer arithmetic:
    // - Pointers can be incremented and decremented.
    // - Pointers can be added and subtracted. They have a slightly different behavior than normal variables.
    // - Pointers can be compared.
    //  But, pointers cannot be multiplied or divided.
    // Conducting arithmentic on pointers is a little different from conducting arithmetic on normal variables.
    

    // Here are some examples of pointer arithmetic:
    // p++ increments the pointer by the size of the object it points to.
    // p-- decrements the pointer by the size of the object it points to.
    // p + n increments the pointer by n times the size of the object it points to.
    // p - n decrements the pointer by n times the size of the object it points to.
    // p1 - p2 subtracts two pointers. The result is the number of objects between the two pointers.
    // p1 < p2 compares two pointers. The result is true if p1 points to an object before p2. The result is false if p1 points to an object after p2.
    // p1 > p2 compares two pointers. The result is true if p1 points to an object after p2. The result is false if p1 points to an object before p2.
    // p1 == p2 compares two pointers. The result is true if p1 points to the same object as p2. The result is false if p1 points to a different object than p2.
    // p1 != p2 compares two pointers. The result is true if p1 points to a different object than p2. The result is false if p1 points to the same object as p2.

    //Understanding pointer arithmetic will allow you to understand how array works internally in C++.
    // Understad it like this; pointers point to memory addresses. When you increment a pointer, you are moving to the next memory address. When you decrement a pointer, you are moving to the previous memory address.
    // This is how arrays work in C++. An array is a collection of objects in memory. The objects are stored in contiguous memory locations. The name of the array is a pointer to the first object in the array. When you increment the pointer, you are moving to the next object in the array. 
    
    // the behavior of pointer arithmetic depends on the type of the pointer. What do i mean by this?
    // if you have a pointer to a char, when you do charPtr++, you are moving 1 byte in memory. This is because a char is 1 byte in size.
    // if you have a pointer to a short, when you do shortPtr++, you are moving 2 bytes in memory. This is because a short is 2 bytes in size.
    // if you have a pointer to an int, when you do intPtr++, you are moving 4 bytes in memory. This is because an int is 4 bytes in size.
    // ect

    //------------------------------------------------------------------------------------------------------------------------------------------------
    // PREFIX and POSTFIX OPERATORS:
    // - (p++) same as *(p++): move the pointer, and then read the data.
    // - (*p)++ read the data, and then move the pointer.

    // *++p is the same as *(++p) moves the pointer to the next object, and then reads the data.
    // *p++ is the same as ++(*p) reads the data, and then moves the pointer to the next object.


    /*
    Understading arrays with pointers:
    - An array is a collection of objects in memory. The objects are stored in contiguous memory locations.
    Recall in your earlier programming classes, you learned that when you try to print an array, you get the memory address of the array. 
    But what does this actually mean??

    The memory address you get when you print an array is the address of the first object in the array. Here's a representation;
    */

   int arr[5] = {1, 2, 3, 4, 5};
   int *p = arr; // p is a pointer to an integer. p points to the first object in the array arr.

   cout << *p << endl; // This will print the value of the first object in the array arr. This is the value of arr[0].
   cout << p << endl; // This will print the address of the first object in the array arr. This is the address of arr[0].

   cout << p++ << endl; // This will print the address of the first object in the array arr. This is the address of arr[0]. p++ moves the pointer to the next object in the array arr. This is the address of arr[1].
   cout << *p << endl; // This will print the value of the second object in the array arr. This is the value of arr[1].
   cout << p << endl; // This will print the address of the second object in the array arr. This is the address of arr[1].

   // how about something like this?
   cout << p + 2 << endl; // This will print the address of the third object in the array arr. This is the address of arr[2]. But, this does not increment the pointer. This just prints the address of the third object in the array arr. This is the address of arr[2].
   
   // Important; When you do something like p + n, you are not incrementing the pointer. You are just getting the address of the nth object in the array. The pointer is not incremented. The pointer is still pointing to the same object in the array.
   // If you want to increment the pointer, you have to do p++. This will move the pointer to the next object in the array. Even if it's inside the print statement.

    // Lets look at some more examples;

    double darr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *pd = darr; // dp is a pointer to a double. dp points to the first object in the array darr.
    cout << *pd++ << endl; // output: 1.1. This will print the value of the first object in the array darr. This is the value of darr[0]. pd++ moves the pointer to the next object in the array darr. This is the address of darr[1].
    cout << *pd << endl; // output: 2.2. This will print the value of the second object in the array darr. This is the value of darr[1].

//------------------------------------------------------------------------------------------------------------------------------------------------
    // POINTERS with Heap memory and dynamic array;
    // - Dynamic array size can be change unlike fixed array.
    // - Dynamic array is created in the heap memory.
    // - Dynamic array is created using new keyword.
    // - Dynamic array is created in heap memory which is dynamically allocated using run time, not compile time.
    // - fixed size created in stack and gets automatically destroyed when out of scope.

    //-------- HOW TO CREATE A DYNAMIC ARRAY IN C++ --------
    // In java, you can create a dynamic array using the ArrayList class. In C++, you can create a dynamic array using pointers.

       //Allocation of dynamic array
     int size;
     cout<<"size: ";
     cin>>size;
     int* myArray2=new int[size]; //created in heap
     int array1[size]; //created in stack

  // add additional element to dynamic array
    int new_size = size + 1;
    myArray2=new int[new_size];
    int *new_array = new int[new_size];
    myArray2=new_array; //changing the myArray2 size at run time

    int array2[10];
    array1=array2; //trying to change the array size at run time for a static array
  


    return 0;
} 
