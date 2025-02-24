#include <iostream> // This is a preprocessor directive. It is a standard way of starting a line with a # symbol. It tells the compiler to include the iostream file before compiling the program.
 //lecture 1. 
 
using namespace std; // when you use this, you dont need to write std:: before cout and endl.

// This is the main function. It is the entry point of the program. The program execution starts from the main function.
// Notice how there is a return type of int before the main function. This is because the main function is expected to return an integer value.
// This is mostly compiler dependent and some compilers may not require a return type. (It is still recommended to use it)

int main() {
    std::cout << "Hello World " << std::endl;
    return 0; // This is to let the compiler know that the program has executed successfully. The return value of 0 indicates that the program has executed successfully. This is good practice.
}



// Topics: 
//Data types --> check the slides for more information.
//Modfiers --> check the slides for more information.