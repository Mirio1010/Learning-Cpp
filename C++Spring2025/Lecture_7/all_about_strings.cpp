#include <iostream>
#include <string.h>
using namespace std;

int main() {

/*
        Topic: Strings in C++
        C++ supports two forms of strings: C-style strings and C++ string class.

        C-style strings:
        - A C-style string is litterally an array of type char with a terminating null character ;'\0'.
        - The null character is used to mark the end of the string.

        here's a visual representation of a C-style string:
        char good[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
        char bad[6] = {'h', 'e', 'l', 'l', 'o', '!'};

        A better way to inicialize a C-style string is to use double quotes:
        char iKnowMySize[] = "hello";  --> only 5 characters are needed, the null character is added automatically.
        char letCompilerCount[] = "hello";  

        C++ string class:
        - The C++ string class is a part of the C++ standard library.
        - The C++ string class is more flexible and easier to use than C-style strings.
        - The C++ string class is a part of the std namespace, so you need to use the std::string type to declare a string variable.

        here's a visual representation of a C++ string;*/

        string myString = "Hello, World!"; // this is a C++ string. This is a string object.
        cout << myString << endl; // this will print "Hello, World!" to the console.
        cout << &myString << endl; // this will print the memory address of the string object to the console.
        myString[0] = 'h'; // this will change the first character of the string to 'h'.
        cout << myString << endl; // this will print "hello, World!" to the console.
        myString = "Goodbye, World!"; // this will change the value of the string object to "Goodbye, World!".
        cout << myString << endl; // this will print "Goodbye, World!" to the console.
        cout << &myString << endl; // this will print the memory address of the string object. Might change if SSO is used.
    /* What is SSO?
        - SSO stands for Small String Optimization. It is a technique used by the C++ string class to optimize the memory usage of strings.
          If a string is small, it is stored in the stack memory. If a string is large, it is stored in the heap memory. This depends on what the compiler considers small and large.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    Input and Output with C++ strings:
    - You can use the cin object to read input from the console into a C++ string.
    - You can use the cout object to write output from a C++ string to the console.

    here's how to do it;
    */

    string name;
    cout << "Enter your name: ";
    cin >> name; // this will read input from the console into the string variable name.
    cout << "Hello, " << name << "!" << endl; // this will write output to the console from the string variable name.
/* 
    There is a small problem when using cin to read strings from keyboard. The problem is that cin stops reading input when it encounters a space. 
    This means that if you enter a string with a space like "New York" cin will only read the first word. This is because cin reads input until it encounters a whitespace character.

    How do we solve this problem?
    - You can use the getline function to read a line of text from the console into a string. The getline function reads input until it encounters a newline character.
    - The getline function takes two arguments: the input stream and the string variable.
    
    here is how to use the getline function;
    */

    string city;
    cout << "Enter your city: ";
    getline(cin, city); // this will read input from the console into the string variable city.
    cout << "You live in " << city << "." << endl; // this will write output to the console from the string variable city.
/*
-------------------------------------------------------------------------------------------------------------------------------------------

    Functions in string.h
    - The string.h header file provides functions for manipulating C-style strings.
    - The string.h header file provides functions for copying, concatenating, comparing, and searching C-style strings.
    - In order to use the functions in the string.h header file, you need to include the string.h header file in your program. like this #include <string.h>

    here are some of the functions in the string.h header file;
    */

    char str1[] = "Hello";
    char str2[] = "World";

    strlen(str1); // this function returns the length of the string.
    strcpy(str1, str2); // this function copies the contents of the second string into the first string.
    strcat(str1, str2); // this function concatenates the second string onto the first string.
    strcmp(str1, str2); // this function compares the two strings. It returns 0 if the strings are equal, a positive number if the first string is greater than the second string, and a negative number if the first string is less than the second string.
    strstr(str1, str2); // this function searches for the second string in the first string. It returns a pointer to the first occurrence of the second string in the first string.
    strchr(str1, 'o'); // this function searches for the character in the string. It returns a pointer to the first occurrence of the character in the string.
    strrchr(str1, 'o'); // this function searches for the character in the string. It returns a pointer to the last occurrence of the character in the string.
/*
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                        String class iterators
    - The string class provides iterators for iterating over the characters in a string.
    - An iterator is an object that points to an element in a container.
    - You can use iterators to traverse the characters in a string.

    here is an example of how to use iterators to traverse the characters in a string;
    */

    string myString2 = "Hello, World!";
    string::iterator iter;  
    for (iter = myString2.begin(); iter != myString2.end(); iter++) {
        cout << *iter << endl; // this will print each character in the string to the console.
    }
    


    






    return 0;
}