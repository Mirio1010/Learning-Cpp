#include <iostream>
using namespace std;



int main () {

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

    for (int i = 0; i < newSize; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> myArray[i];
    }

}