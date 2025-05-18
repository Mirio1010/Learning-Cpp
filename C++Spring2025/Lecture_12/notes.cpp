#include <iostream>
using namespace std;

int main() {
    /*
    -------------------------STL INTRODUCTION--------------------------------
    - The Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates.
    - The java equivalent of STL is the Java Collections Framework (JCF).
    - In c++, we call data structures and algorithms as containers and algorithms.
    
    The stl libray consists of four components:
    1. Algorithms: A set of functions to perform operations on containers.
    2. Containers: A set of classes to store objects and data.
    3. Function objects: Objects that can be called as if they were functions.
    4. Iterators: A set of classes to provide a way to access the elements of a container.
    
    Here are the most commonly used containers in STL:
    1. Vector: A dynamic array that can grow and shrink in size.
    2. List: A doubly linked list that allows for efficient insertion and deletion of elements.
    3. Deque: A double-ended queue that allows for efficient insertion and deletion of elements at both ends.
    4. Set: A collection of unique elements that are stored in a specific order.
    5. Map: A collection of key-value pairs that are stored in a specific order.
    6. Stack: A last-in-first-out (LIFO) data structure that allows for efficient insertion and deletion of elements.
    7. Queue: A first-in-first-out (FIFO) data structure that allows for efficient insertion and deletion of elements.
    8. Priority Queue: A data structure that allows for efficient insertion and deletion of elements based on their priority.
    9. Unordered Set: A collection of unique elements that are stored in an unordered manner.
    10. Unordered Map: A collection of key-value pairs that are stored in an unordered manner.
    11. Array: A fixed-size array that can store elements of a specific type.
    12. Bitset: A data structure that allows for efficient storage and manipulation of bits.
    13. Forward List: A singly linked list that allows for efficient insertion and deletion of elements.
   
   These are standard data structures that are used in computer science and programming. They are used to store and manipulate data in a variety of ways. The STL provides a set of algorithms that can be used to perform operations on these data structures, such as sorting, searching, and manipulating the data.


    -------------------------Array:--------------------------------
    - An array is a collection of elements of the same type that are stored in contiguous memory locations.
    - Arrays are used to store multiple values of the same type in a single variable.

    The std::array class is a container that encapsulates fixed size arrays. It is a part of the STL and provides a way to work with arrays in a more convenient and efficient manner.
    - The std::array class is defined in the <array> header file and is a template class that takes two template parameters: the type of the elements and the size of the array.

    This is how you access the elements of an array using the container class:
    1. at(): This function returns a reference to the element at the specified index. It performs bounds checking and throws an exception if the index is out of range.
    2. operator[]: This function returns a reference to the element at the specified index. It does not perform bounds checking and can lead to undefined behavior if the index is out of range.
    3. front(): This function returns a reference to the first element of the array.
    4. back(): This function returns a reference to the last element of the array.
    5. data(): This function returns a pointer to the underlying array.
    6. size(): This function returns the number of elements in the array.
    7. fill(): This function fills the array with the specified value.
    8. swap(): This function swaps the contents of two arrays.

    here is an example of how to use the std::array class: 

    #include <iostream>
    #include <array>    This is the header file that contains the std::array class
    using namespace std;

    int main() {
        array<int, 5> myArr = {1, 2, 3, 4, 5};   // This is how you define an array using the std::array class

        cout << "The first element of the array is: " << myArr.at(0) << endl;   // This is how you access the first element of the array using the at() function
        cout << "The second element of the array is: " << myArr[1] << endl;   // This is how you access the second element of the array using the operator[] function
        cout << "The last element of the array is: " << myArr.back() << endl;   // This is how you access the last element of the array using the back() function
        cout << "The size of the array is: " << myArr.size() << endl;   // This is how you get the size of the array using the size() function
        cout << "The first element of the array is: " << myArr.front() << endl;   // This is how you access the first element of the array using the front() function


    }


    -------------------------Vector:--------------------------------
    - A vector is a dynamic array that can grow and shrink in size. It is a part of the STL and provides a way to work with arrays in a more convenient and efficient manner.
    - It's basically an ArrayList from Java. You dont have to worry about the size of the array. It will automatically resize itself when you add or remove elements.
    - The std::vector class is defined in the <vector> header file and is a template class that takes one template parameter: the type of the elements.
    - The std::vector class provides a number of member functions that can be used to manipulate the vector, such as push_back(), pop_back(), insert(), erase(), clear(), and resize().

    This is how you use the std::vector class:

    #include <iostream>
    #include <vector>    This is the header file that contains the std::vector class
    using namespace std;

    int main() {
        vector<int> myVec;   // This is how you define a vector using the std::vector class
        myVec.push_back(1);   // This is how you add an element to the end of the vector using the push_back() function
        myVec.push_back(2);   // This is how you add an element to the end of the vector using the push_back() function
        myVec.push_back(3);   // This is how you add an element to the end of the vector using the push_back() function

        cout << "The first element of the vector is: " << myVec.at(0) << endl;   // This is how you access the first element of the vector using the at() function
        cout << "The second element of the vector is: " << myVec[1] << endl;   // This is how you access the second element of the vector using the operator[] function
        cout << "The last element of the vector is: " << myVec.back() << endl;   // This is how you access the last element of the vector using the back() function

        cout << "The size of the vector is: " << myVec.size() << endl;   // This is how you get the size of the vector using the size() function

        you can also you a for loop to iterate through the vector:
        for (int i = 0; i < myVec.size(); i++) {
            cout << "The element at index " << i << " is: " << myVec[i] << endl;   // This is how you access the element at index i of the vector using the operator[] function
        }
        return 0;
    }


    Using the STL is a great way to make your code more efficient and easier to read. It provides a set of powerful data structures and algorithms that can be used to solve a wide variety of problems. The STL is a part of the C++ standard library and is widely used in C++ programming. It is a powerful tool that can help you write better code and improve your programming skills.
    You dont have to worry about the implementation of the data structures. You also dont have to worry about
    memory management. The STL takes care of all of that for you. You just have to worry about the logic of your code.

    Using vector is great but it has some disadvantages:
    1. It is not as efficient as arrays when it comes to memory usage. Vectors use more memory than arrays because they have to store additional information about the size and capacity of the vector.
    2. Vectors are not as efficient as arrays when it comes to performance. Vectors have to perform additional checks and operations to manage the size and capacity of the vector, which can slow down performance.
    3. Vectors are not as efficient as arrays when it comes to accessing elements. Vectors have to perform additional checks and operations to access elements, which can slow down performance.
    4. and more..

    The general rule of thumb is to use arrays when you know the size of the array at compile time and use vectors when you dont know the size of the array at compile time. Vectors are more flexible and easier to use than arrays, but they are not as efficient. If you need to store a large amount of data and performance is a concern, you should consider using arrays instead of vectors.
    
    You can use vector.reseerve(amount goes here) to reserve memory for the vector. This will help improve performance by reducing the number of memory allocations and copies that are needed when adding elements to the vector. The reserve() function takes a single argument, which is the number of elements to reserve memory for. For example, if you want to reserve memory for 100 elements, you would call vector.reserve(100). This will allocate enough memory for 100 elements, but it will not change the size of the vector. The size of the vector will still be 0 until you add elements to it.
    This is to prevent vector from doubling its size every time you add an element to it. This can be inefficient and can lead to performance issues. By reserving memory for the vector, you can avoid this problem and improve performance.

    -------------------------Iterators:--------------------------------

    you can use iterators to iterate through the elements of a vector. An iterator is an object that points to an element in a container. It is similar to a pointer, but it is more flexible and can be used with different types of containers. Iterators are used to access the elements of a container without exposing the underlying implementation of the container.
    - Iterators are used to traverse the elements of a container in a generic way. They provide a way to access the elements of a container without exposing the underlying implementation of the container.

    here is an example of how to use iterators with a vector:
    
    for (auto it = myVec.begin(); it != myVec.end(); ++it) {
        cout << "The element is: " << *it << endl;   // This is how you access the element pointed to by the iterator using the dereference operator (*)
    }

    -------------------------Sorting:--------------------------------

    - The STL provides a set of algorithms that can be used to perform operations on containers, such as sorting, searching, and manipulating the data.
    - The sort() function is used to sort the elements of a container in ascending order. It takes two arguments: the first argument is the beginning of the range to be sorted and the second argument is the end of the range to be sorted.
    - The sort() function uses the quicksort algorithm to sort the elements of the container. It is a very efficient sorting algorithm and is used in many applications.

    
    What if you want to sort your own custom data type? You can do that too. You just have to overload the < operator for your custom data type. This will allow the sort() function to compare the elements of your custom data type and sort them accordingly.
    
    Point is a custom data type that represents a point in 2D space. It has two member variables: x and y, which represent the coordinates of the point. The < operator is overloaded to compare two points based on their x and y coordinates. If the x coordinates are equal, the points are compared based on their y coordinates. If the x coordinates are not equal, the points are compared based on their x coordinates.
    The sort() function is used to sort the elements of the vector in ascending order based on the x and y coordinates of the points. The sorted points are then printed to the console.
    
    #include <iostream>
    #include <vector>
    #include <algorithm>   This is the header file that contains the sort() function
    using namespace std;
    class Point {
    public:
        int x, y;
        Point(int x, int y) : x(x), y(y) {}   // constructor

        // overload the < operator to compare two points
        // based on their x and y coordinates

        
        bool operator<(const Point& p) const {   // overload the < operator
            if (x == p.x) {
                return y < p.y;   // compare based on y coordinates
            }
            return x < p.x;   // compare based on x coordinates
        }
    };



    
    */
    return 0;
}