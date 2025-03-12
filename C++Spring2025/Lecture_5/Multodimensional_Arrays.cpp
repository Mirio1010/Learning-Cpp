#include <iostream>
using namespace std;



int main () {


//  TOPIC: ARRAYS AND POINTERS;

    // Allocating of dynamic array

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *myArray = new int[size]; // creating an array of size 'size' in the heap memory.
    int array1[size]; // creating an array of size 'size' in the stack memory.

    // add additional elements to the array

    int newSize = size + 1;
    myArray = new int [newSize];
    int *newArray = new int [newSize];
    myArray = newArray; // myArray now points to the same memory location as newArray

    // how to print all the element of the array.
    for (int i = 0; i < newSize; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> myArray[i];
    }
    // Another way of printing the elements of the array, this time using pointer arithmetic. This is what happens in the background when we use the square brackets.
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
        cout << *(myArray + i) << " ";
    }

    // Deallocating the memory (EXTREMELY IMPORTANT!!!)

    // After we are done using the array, we need to deallocate the memory that we have allocated. This is done using the delete keyword.

    delete [] myArray; // deallocating the memory of the array. If we don't do this, we will have a memory leak. Aka, zombie memory. This is extremely bad and can lead to the program crashing. Do not forget to add the [] after delete, otherwise it will only delete the first element of the array. The square brackets tell the compiler that it is an array and that it should delete all the elements of the array.
    myArray == nullptr; // setting the pointer to nullptr, so that we don't have a dangling pointer. This is a pointer that points to a memory location that has been deallocated. This is also bad and can lead to the program crashing.
    // another way of doing the line above is this; myArray = NULL; // this is the same as nullptr, but nullptr is the modern way of doing it.

//-------------------------------------------------------------------------------------------------------------------------------------------------
/*
                    Multidimensional Arrays

    Def: Multidimensional arrays are arrays that have more than one dimension. They are arrays of arrays. For example, a 2D array is an array of arrays. A 3D array is an array of arrays of arrays. And so on.
    We are going to focus on 2D arrays in this course. (For simplicity)

    How to declare a 2D array:
*/

    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int **table = new int*[rows]; // creating an array of pointers to arrays named table. This is an array of pointers to arrays.
    for (int i = 0; i < rows; i++) { // for each row in the table array. We are going to create an array of size cols.
        table[i] = new int[cols]; // creating an array of size cols for each pointer in the table array.
    }

    // deallocating the memory of the 2D array.
    for (int i = 0; i < rows; i++) {
        delete [] table[i]; // deleting the array of size cols for each pointer in the table array.
    }
    delete [] table; // deleting the array of pointers to arrays.
    table = nullptr; // setting the pointer to nullptr.


}