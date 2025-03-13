#include <iostream>
using namespace std;
// Functions continued.


int main() {
    // Returning a pointer from a function.
    // In C++, you can return a pointer from a function. This is useful when you want to return an array from a function. 
    // You can return a pointer to the array from the function. 
    // This is because arrays are pointers, and pointers are passed by reference. 
    // This means that the array is not copied when it is passed to the function. Instead, the function receives a pointer to the array. 
    // This means that the function can modify the array that is passed to it. This is why we don't need to return the array from the function. We can just modify the array in the function.

    // here's an example of returning a pointer from a function. (look at add function below)
    int n1 = 5;
    int n2 = 6;
    int *c = add(&n1, &n2);

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Array Argument 

    // In C++, you can pass an array to a function as an argument. This is useful when you want to pass an array to a function.
    // You can pass an array to a function by passing a pointer to the array. This is because arrays are pointers, and pointers are passed by reference.
    // here's an example of passing an array to a function. (look at printArray function below)
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // ---------> arr is a pointer to the first element of the array. The size of the array is also passed to the function.

    // since arr points to the address of the first element of the array. We can do something like this:

    int *c = arr;
    printArray(c, 5); // this will print the same thing as the above printArray function call.

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Multiple values from a function

    // References in C++ are very helpful when you want to work on multiple values in a function. 
    // Here's what I mean;

    int array[] = {1, 2, 3, 4, 5};
    int min = array[0];
    int max = array[0];
    getMinMax(array, 5, min, max); // this function will get the minimum and maximum values of the array. The min and max variables will be modified in the function. This is because the function receives a reference to the min and max variables. This means that the function can modify the original variables. This is useful when you want to return multiple values from a function.

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Function pointer

    // In C++, you can pass a function as an argument to another function. This is useful when you want to pass a function to another function.
    // You can pass a function to another function by passing a function pointer. This is because functions are pointers, and pointers are passed by reference.
    // Here's an example of the syntax for a function pointer:

    // return_type (*function_name)(parameter_type) = function_name;
    int (*add)(int, int) = add; // this is a function pointer. It is used to pass a function as an argument to another function. This is useful when you want to pass a function to another function.

    // here's another example of delcaring a function pointer and initialization but in different lines.
    int (*fptrAdd)(int, int); // this is a function pointer. It is used to pass a function as an argument to another function. This is useful when you want to pass a function to another function.
    fptrAdd = add; // this initializes the function pointer. This tells the function pointer to point to the add function.
    fptrAdd(5, 6); // this calls the function using the function pointer.


    // Now we will go over the uses of a function pointer.
    // Function pointers are useful when you want to pass a function as an argument to another function. This is useful when you want to pass a function to another function.

    bool (*compare)(int, int) = Ascending;
    
    sort (arr, 5, compare); // this function takes an array, the size of the array, and a function pointer as arguments. The function pointer is used to compare two elements in the array. This is useful when you want to sort an array using a custom comparison function.
    
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Void pointers

    // The void type of pointer is a special type of pointer with no type. This means that you can assign any type of pointer to a void pointer. 
    // This is useful when you want to pass a pointer to a function that can accept any type of pointer.

    // here's an example of using a void pointer:
    int x = 5;
    int *intptr = &x;
    void *voidptr = intptr; // this is a void pointer. It is used to pass a pointer to a function that can accept any type of pointer.

    // here's an example of using a void pointer in a function:
    
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Function name overloading

    // In C++, you can have multiple functions with the same name but different parameters. This is called function overloading. This is useful when you want to have multiple functions with the same name but different parameters.

    // here's an example of function overloading:
    
    int c = add(1, 3); // this calls the add function that takes two integers as arguments.
    double d = add(1, 2, 8); // this calls the add function that takes two doubles as arguments.

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        // Local and global variables

    // You can have local and global variables. Local variables are variables that are declared inside a function. Global variables are variables that are declared outside a function.
    // I wont go over this because you should already know this from java.

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
       // static variables
       // In C++, you can have static variables. Static variables are variables that retain their value between function calls. This is useful when you want to keep the value of a variable between function calls.
       // In static variables, we dont want to access the variable through anywhere, but we do want the availability throughout the program.

    // here's an example of using a static variable:
    /*
    void test() {
        static int count = 0; // this is a static variable. It retains its value between function calls.
        count++;
        cout << count << endl;
    }

    int main() {
        test(); // this will print 1
        test(); // this will print 2
        test(); // this will print 3
    }
    */

    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // C++ Hearder files

    // In C++, you can use header files to include code from other files. This is useful when you want to use code from other files.
    // You can use the #include directive to include a header file. 
    // What are header files?
    // Header files are files that contain code that is used in other files. They are used to include code from other files. 

    // here's an example of using a header file:

    /*
    #include <iostream> // this includes the iostream header file. This is a standard header file that is used to include the input/output stream library.
    #include "myheader.h" // this includes the myheader.h header file. This is a custom header file that is used to include code from the myheader.h file.

    int main() {
        cout << "Hello, World!" << endl; // this uses the cout object from the iostream header file.
        myFunction(); // this uses the myFunction function from the myheader.h header file.
    }

    it basically copies the code from the header file and pastes it in the file where the header file is included.

    - in the header files, you use a "#pragma once directive" to prevent the header file from being included multiple times. This is useful when you want to prevent the header file from being included multiple times.
    
    */





    return 0;
}

bool Ascending(int a, int b) {
    return a > b;
}

bool Descending(int a, int b) {
    return a < b;
}

void sort(int arr[], int size, bool (*compare)(int, int)) { // this function takes an array, the size of the array, and a function pointer as arguments. The function pointer is used to compare two elements in the array. This is useful when you want to sort an array using a custom comparison function.
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void getMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *add(int *aptr, int *bptr) {
    int sum = *aptr + *bptr;
    return &sum;
}

int add(int a, int b, int c) {
    return a + b + c;
}