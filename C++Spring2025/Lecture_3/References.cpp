// This is the most important Topic of the Lecture 3 
// Today we will learn about the following topics: 
//Reference and Pointers. If you dont understand this topic fully, it'll be extremely difficult to understand the rest of the course.
// So, make sure you understand this topic fully.

#include <iostream>
using namespace std;


int main() {

/*
Reference:

what is a reference?

Def: A reference is an alias for an object. In other words, 
    it is a different name for an object.

A reference type "refers to" an object. It is not an object itself. It is just another name for an object.
- When you create a reference, you MUST ne initialize it with an object.

Here are the important properties of references:

    - A reference must be initialized with an object.
    - Once a reference is initialized with an object, it cannot be changed to refer to another object. (This is
        different from java, where you can change the object a reference refers to)
    - A reference cannot be NULL. It must refer to an object.


*/

//Reference Declaration: How do we declare a reference? look below.

int i = 10;
int &r = i; // r is a reference to i. r is another name for i. In other words, r is an integer reference to i.

//to understand how this works, lets look at something similar that you're familiar with in java;

int j = 10;
int k = j; // when you do this in java, k is a copy of j. k is not another name for j. k is a different variable that has the same value as j. But for a refecence, it is different. There is not copying happening.

// Syntax that is wrong:

int &r1; // This is wrong. A reference must be initialized with an object. This is not initialized with an object.

/*
Why we need a reference? 

    The main use of references is acting as function formal parameters to support passby-reference. In a reference variable is passed into a function, the function works on
the original copy (instead of a clone copy in pass-by-value). Changes inside the
function are reflected outside the function.

    IMPORTANT: After a reference has been defined, all operations on that reference are actually
operations on the object to which the reference is bound! so cool!!

Let's look at some code:
*/

int p1 = 10;
int &o = p1; // o is a reference to p1. o is another name for p1. o is an integer reference to p1.

cout << "The address of p1:" << &p1 << endl; 
cout << "The address of o:" << &o << endl; // The address of o is the same as the address of p1. This is because o is another name for p1. o is not an object itself. It is just another name for p1.

// The & operator is used to get the address of a variable. In the example above, &p1 gets the address of p1. &o gets the address of o.

//Lets look at something that its not allowed;

int k = 20;
int &o = k; // This is not allowed. You cannot change the object a reference refers to. o is already a reference to p1. You cannot change it to refer to k.

// anything that happens to a reference, happens to the object it refers to. Lets look at an example;

int p2 = 12;
int &h = p2;

h++;
cout << p2 << endl; // This will print 13. h++ is the same as p2++. h is another name for p2. So, when you increment h, you are actually incrementing p2.

p2++;
cout << h << endl; // This will print 14. p2++ is the same as h++. p2 is another name for h. So, when you increment p2, you are actually incrementing h.
 //--------------------------------------------------------------------------------

 //lets look at a function that uses a reference as a parameter;

   // void swap(int x, int y) {
   // in the backend, this is what happens:
    // int x = whaterver value is passed in;
    // int y = whatever value is passed in;
    //    int temp = x;
    //    x = y;
    //    y = temp;
    //}
    
 
    int a = 100;
    int b = 200;

    cout << "Before swap: " << a << endl; // 100
    cout << "Before swap: " << b << endl; // 200
    //swap(a, b);
    cout << "After swap: " << a << endl; // 100
    cout << "After swap: " << b << endl; // 200 

    // swap(a, b) does not work because the function swap is working on a copy of a and b. It is not working on the original a and b.
    // Ho do we fix this? We use a reference as a parameter. Bingo! 

    // Lets take another example:

    // void swap2(int &x, int &y) {  ---------> Notice the difference between this and the previous swap function. The difference is the & symbol.
    //    int temp = x;                         This function takes in a reference to x and a reference to y. This means that the function is working on the original x and y.
    // this is what happens in the backend:
    //    int &x = whatever value is passed in;
    //    int &y = whatever value is passed in;
    //    x = y;
    //    y = temp;
    //}



    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << firstNum << endl; // 10
    cout << "Before swap: " << secondNum << endl; // 20
    //swap2(firstNum, secondNum);
    cout << "After swap: " << firstNum << endl; // 20
    cout << "After swap: " << secondNum << endl; // 10



    // Now the swapping actually works because the function is working on the original firstNum and secondNum. It is not working on a copy of firstNum and secondNum.
    // This is how C++ programming is optimized. It is optimized to work on the original copy of variables. This is why C++ is faster than Java. Java works on a copy of variables. C++ can work on the original variables if you use references.
    // There is less memory usage in C++ because you are not working on a copy of variables. You are working on the original variables. T
    // take a look at png file in the same folder as these notes. Named "memory_diagram"

   // Lets look at some examples to syntax to test our knowledge;

   int i = 1024, i2 = 2048; 
   int &r = i, r2 = i2;
   int i3 = 1024, &ri = i3;
   int &r3 = i3, &r4 = i2;
   int &refVal4 = 10; // This is wrong. A reference must be initialized with an object, not a literal value.
   double dval = 3.14;
   int &refVal5 = dval; // This is wrong. A reference must be initialized with an object of the same type. dval is a double, not an int.


//------------------------------------------------------------------------------------------------------------------------------------------------
/*  Reference to const

    unlike an ordinary reference, a reference to const cannot be used to change the object to which the reference is bound.

    What does this mean? lets take a closer look;
*/

const int ci = 1024;
const int &ri = ci; // r1 is a reference to c1.

ri = 42; // This is wrong. You cannot change the object a reference to const refers to. c1 is a const int. r1 is a reference to a const. 
int &r2 = ci; // This is wrong. You cannot have a reference to a const int that is not a reference to a const int. 

//------------------------------------------------------------------------------------------------------------------------------------------------
// Initialization and references to const:
 // We can bind a reference to const to a non constant object, a literal, or
 // a more general expression. 

 int l = 42;
 const int &l1 = l; // This is allowed. l1 is a reference to const. l1 is a reference to a const int. l is a non-const int. This is allowed.

 const int &l2 = 42; // This is allowed. l2 is a reference to const. l2 is a reference to a const int. 42 is a literal. This is allowed.
 const int &l3 = l1 * 2; // This is allowed. l3 is a reference to const. l3 is a reference to a const int. l1 * 2 is a more general expression. This is allowed.
 int &l4 = l * 2; // This is wrong. l4 is a reference to int. l4 is a reference to a non-const int. l * 2 is a more general expression. This is not allowed.

// Here's another interesting property of references to const:
// const references are allowed to bind to an object od a different type.

// if you write:
double val = 3.14;
const int &val2 = val; // This is allowed. val2 is a reference to const. val2 is a reference to a const int. val is a double. This is allowed.

// The compiler will turn the code above into:

 int temp = val;
const int &gi = temp;






}