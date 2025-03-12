#include <iostream>
using namespace std;


/*
            Topic: Functions
    
    -What is a function?

    Definition: A function is a block of code that performs a specific task. The java equivalent of a function is a method. 
                Functions are used to break down the code into smaller, more manageable pieces. This makes the code easier to read and understand. 
                 Functions also make the code more modular, which means that the code is easier to maintain and debug. 
                Functions are also reusable, which means that we can use the same function in multiple places in the code.
*/
    // Three thing are need for using C++ functions:
    // 1. providing a function definition.
    // 2. providing a function prototype.
    // 3. calling the function.
    // below you'll find an example of a function definition, a function prototype, and calling the function.


void testFunction(); // function prototype. This is a declaration of the function. This tells the compiler that there is a function called testFunction that takes no arguments and returns void. This is needed because the function is defined after the main function. If the function was defined before the main function, then the prototype would not be needed.

void testFunction() { // function definition. This is the implementation of the function. This is where we write the code that the function will execute.
    cout << "This is a test function." << endl;
}

int main() {
    testFunction(); // calling the function. This is where we call the function. This is where we tell the compiler to execute the code in the function.

    /*
    Here are some things to note about functions with your java knowledge:
    - Functions can be called before they are defined. This is because the compiler reads the code from top to bottom. So, if the function is defined after the main function, then you need to provide a function prototype.
    - functions cannot return an array (This is differemt from java). This is because arrays are pointers, and pointers are passed by reference. This means that the array is not copied when it is passed to the function. Instead, the function receives a pointer to the array. This means that the function can modify the array that is passed to it. This is why we don't need to return the array from the function. We can just modify the array in the function.
    - you can return int, double, char, string, etc. from a function. You can also return a pointer from a function. This is useful when you want to return an array from a function. You can return a pointer to the array from the function.
    - you could leave out the parameter names in the function prototype. This is because the parameter names are not needed in the prototype. The parameter names are only needed in the function definition. The parameter names are used to give the parameters a name in the function definition. This makes the code easier to read and understand.
    */


   // Function arguments and passing by value and reference.
    // In C++, you can pass arguments to a function by value or by reference. 
    // This is not as complicated as it sounds, Ill show you what I mean with an example.

    // Passing by value:
    double add(double x);
    int size = 5; 
    double result = add(size); // when you pass a variable to a function by value, the function receives a copy of the variable. This means that the function cannot modify the original variable. The function can only modify the copy of the variable. This is called passing by value. This is the default way of passing arguments to a function in C++. i.e, size stays the same after the function is called.

    // Passing by reference:
    void addOne(int &x);
    int number = 5;
    addOne(number); // when you pass a variable to a function by reference, the function receives a reference to the variable. This means that the function can modify the original variable. This is called passing by reference. This is useful when you want to modify the original variable in the function. i.e, number is now 6 after the function is called. i.e, the function modifies the original variable. unlike passing by value.

    // passing by address, i.e passing a pointer to a function. This is similar to passing by reference, but it is more explicit. This is useful when you want to make it clear that the function is modifying the original variable. 
    void addTwo(int *x);
    int num = 5;
    addTwo(&num); // when you pass a variable to a function by address, the function receives a pointer to the variable. This means that the function can modify the original variable. This is called passing by address. This is useful when you want to modify the original variable in the function. i.e, num is now 7 after the function is called. i.e, the function modifies the original variable. unlike passing by value.
    
    // Even though passing by reference and passing by addess are similar,
    // it is better to use references when you can. This is because references are safer than pointers, and they use less memory.

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
        Efficiency considerations and const references

    - Functions with reference parameters are generally perceived as functions that modify the
    arguments passed, because that is why reference parameters are actually for.num

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                Inline function
-Calling a function generally causes a certain overhead (stacking arguments,
jumps, etc...), and thus for very short functions, it may be more efficient to
simply insert the code of the function where it is called, instead of performing
the process of formally calling a function.

example:

inline void printMe(string message) {
    cout << message << endl;
}

main () {
    for (int i = 0; i < 1000000000000; i++) {  -----> notice that the function is called 1000000000000 times. This is a lot of function calls.
        printMe("Hello, World!"); ----> this is the function call. But since the function is an inline function, the code of the function is inserted here. This is done by the compiler. This is done to save time and memory. This is because the function is very short, so it is more efficient to insert the code of the function here, instead of performing the process of formally calling the function.
    }

    inside the loop, the code inserted is the code of the function printMe, which is:
    cout << "Hello, World!" << endl;
    
}


//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                Default values in parameters
In C++, functions can also have optional parameters, for which no arguments are
required in the call, in such a way that, for example, a function with three parameters
may be called with only two. For this, the function shall include a default value for its
last parameter, which is used by the function when called with fewer arguments.

example: 

    int divide(int a, int b = 2) {
        return a / b;  --> if the function is called with only one argument, the second argument is set to 2 by default. Pretty useful!
    }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                Array Argument

more on this in next class.

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
               returning a pointer from a function

In C++, you can return a pointer from a function. This is useful when you want to return an array from a function. You can return a pointer to the array from the function. This is because arrays are pointers, and pointers are passed by reference. This means that the array is not copied when it is passed to the function. Instead, the function receives a pointer to the array. This means that the function can modify the array that is passed to it. This is why we don't need to return the array from the function. We can just modify the array in the function.

int *add(int *aptr, int *bptr) {
    int *sum = *aptr + *bptr;
    return sum;
}
int *addv2(int *aptr, int *bptr) {
    int *sum = new int;
    *sum = *aptr + *bptr;
    return sum;
}
 this is a better way of returning a pointer from a function. This is because the memory is allocated in the heap memory.
 Having the memory for sum being allocated in the memory is better because the memory is not deallocated when the function returns. This means that the memory is still available after the function returns. 
You need to delete the sum address in the heap after you are done using it, you can do this by using the delete keyword in main where the function is called.

*/





    return 0;


    


}