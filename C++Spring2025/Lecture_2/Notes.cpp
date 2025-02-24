#include <iostream>
using namespace std;

/*
This lecture is about the const qualifier in C++. 
*/

int getSize(); // Forward declaration

int main() {

    // Const Qualifier in C++ Example:
    const int x = 5; // This is a constant variable. It means that the value of x cannot be changed. Similar to final in Java. since it cannot be changed, it must be inialized when declared.
    int y = 10; // This is a normal integer variable.
    x = 7; // This will give an error because x is a constant variable. It cannot be changed.
    y = 15; // This is fine because y is a normal variable.

    // study direct initialization and copy initialization in C++.
    /*[Constant Expressions in C++]:

    A constant expression is an expression whose value cannot change and can be evaluated at compile time.

    Here are some examples of constant expressions:

    const int x = 5  is a constant expression. why? because the value of x cannot change and it can be evaluated at compile time. meaning the 5 is known at compile time.
    const int y = x + 5 is a constant expression. why? because x is a constant expression and 5 is a constant expression. The value of y can be evaluated at compile time.

    here are some examples of non-constant expressions:

    int z = 5; is not a constant expression. why? because the value of z can change. it is nit constant
    const int a = getSize(); is not a constant expression. why? because the value of a is not known at compile time. The method getSize() is evaluated at run time. it's getting called during compile time.
    */

   /*[constexpr keyword] (This is unique to C++)
   
   The constexpr keyword is used to declare a constant expression. It tells the compiler that the value of the variable is constant and can be evaluated at compile time.This keyword was 
   created because In a large system, it can be difficult to determine for certain that an initializer is a constant expression. The constexpr keyword makes it explicit that a variable is a constant expression.

    Here is an example of using the constexpr keyword:

    constexpr int x = 5; // x is a constant expression
    constexpr int y = getSize(); // Error: getSize() is not a constant expression
    constexpr int z = size(); its okay only if size() is a constantexpr function/method.

    in short: constexpr is used to declare a constant expression. It tells the compiler that the value of the variable is constant and can be evaluated at compile time.


    [constexpr functions]

    - constexpr functions are methods that can be evaluated at compile time. They are used to create constant expressions. The return value of a constexpr function is a constant expression.
    - To be a constexpr function, a function must be rather simple; just a return statment computing a value.
    - you use the same keyword constexpr to declare a function as a constexpr function. Example below;

    constexpr int getSize() { this is saying to the compiler to treat this fuction as a constant expression.
        return 5;
    }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    here's a trick question: is the following code valid?

    constexpr int add(const int x, const int y) {
        return x + y;
    }

    const int x , y;
    cin >> x >> y;
    const int z = add(x, y); // is this a constant expression?

    The answer is no. The value of z is not known at compile time. It depends on the user input, which is evaluated at run time. Therefore, z is not a constant expression.
    it will give you an error if you tried doing this.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    here's another trick question: is the following code valid?

    constexpr int add(const int x, const int y) {
        return x + y;
    }

     int x = 5;
     int y = 10;

     constexpr int z = add(x, y); // is this a constant expression?

     The answer is no because the value of z is not known at compile time. It depends on the value of x and y, which are not constant expressions. Therefore, z is not a constant expression.
     if x and y were declared as constant, then z would be a constant expression.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    [Enum and Typedef]

    What are enums and typedefs?

    Enum: An enum is a related set of values or constant under one name. It is a user defined datatype. 
    It is useful for when you want to use integers to present certain states, also to give them certain names for readability..
    */

    enum days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; // this is an enum. it is a user defined datatype. 
    
    /*
    by default, enum starts with the value 0, but that can be changed.
    here's what I mean: 
    */

   enum days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; 
    // now Monday is 1, Tuesday is 2, Wednesday is 3, and so on. instead of starting at 0;

    /*
    Typedef: Typedef is used to give a new name to an existing data type. It is used to make the code more readable and easier to understand.

    here's an example of using typedef:
    */

   days d;
   d = Monday; // This is the say as d = 1; because Monday is 1.

   /*
   can we change enum values like so? 
   monday++
   
   the answer is no, beacuse enums are a set of constants.
   */

  /*
  Here aree Typedefs at work.
  */

 typedef int grades; // this is a typedef. it is used to give a new name to an existing data type. in this case, we are giving a new name to the int data type.
    grades g1{90}, g2{88}; // this is the same as int g1 = 90, int g2 = 88;
    // this is useful for when you want to make your code more readable and easier to understand.
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    /*
    [Logical Operators in C++]

    Logical operators are used to perform logical operations on boolean values. There are three logical operators in C++:

    What is the difference between the following two statements?

    -   if (hours >= 9 && hours <= 18) 
    -   if (age >= 12, age <= 50)

    The difference is the logical operator used. The first statement uses the && operator, which is the logical AND operator. 
    It returns true if both conditions are true. 
    The second statement uses the || operator, which is the logical OR operator.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    [Nested if-else Statements] 
    */

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    /*[Short circuit]             
    short circuit is a technique used in programming to improve the efficiency of logical operations.
    here are some examples of short circuiting:

    -   if (x > 0 && y > 0) // if x is less than 0, then y is not evaluated. this is short circuiting. y > 0 is not checked.
    -   if (x > 0 || y > 0) // if x is greater than 0, then y is not evaluated. this is short circuiting. y > 0 is not checked.

    what would happen if we did this?
    */

   int a = 10, b = 5, i = 5;

   if (a > b && ++i <= b) {

   }
   cout << i; // what would be the value of i? the value of i would be 6. the reason is because the first condition is true, which means the second condition must be evaluated. this is short circuiting.

   
   if (a > b || ++i <= b) {

    /*
    if (isCatched || fetchdata()) {
        fetchdata() will run only if data is not catched.
    }
        
    Risk:

    if (x > 0 || x = 10) {
        risky: x might not be assigned!
    }

    solution:

    if (x > 0 | x = 10) {
        single | instead of double || ensures both sides are evaluated.
        similarly, use & instead of && to ensure both sides are evaluated.
    }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    [Dynamic declaration]

    to understand dynamic declaration, we must first understand the difference between static and dynamic declaration.

    int main() {
        int a = 5, b = 5 // static declaration

        if (true) {
            int c = a + b; // dynamic declaration
        }

        int d = Math.sqrt(a); // dynamic declaration
        count << c << emd1; // error: c is not in scope
    }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    [Loops in C++]

    Loops in c++ work the same way as they do in other programming languages. No need to go over them.
    you can look at the slides for more information.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    [Arrays in C++]

    Arrays in C++ are used to store multiple values of the same data type under one name. It is exactly the same as arrays in other programming languages.

    The syntax for declaring an array in C++ is as follows:

    int arr[5]; // this declares an array of 5 integers.
    int arr[5] = {1, 2, 3, 4, 5}; // this declares an array of 5 integers and initializes it with the values 1, 2, 3, 4, 5.
    int arr[] = {1, 2, 3, 4, 5}; // this declares an array of 5 integers and initializes it with the values 1, 2, 3, 4, 5. the size of the array is determined by the number of values in the initializer list.
    int arr[5] = {1, 2}; // this declares an array of 5 integers and initializes it with the values 1, 2, 0, 0, 0. the remaining values are initialized to 0.
    int arr[5] = {}; // this declares an array of 5 integers and initializes it with the values 0, 0, 0, 0, 0.

    Acessing elements in an array:

    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0]; // this will print 1
    cout << arr[1]; // this will print 2
    cout << arr[2]; // this will print 3
    cout << arr[3]; // this will print 4
    cout << arr[4]; // this will print 5

    you can also use a loop to access elements in an array.

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    this will output: 1 2 3 4 5

    you can also use a for each loop to access elements in an array.

    int arr[5] = {1, 2, 3, 4, 5};
    for (int x : arr) {
        cout << x << " ";
    }

    this will output: 1 2 3 4 5

    [Multidimensional Arrays]

    Multidimensional arrays are arrays of arrays. They are used to store data in a tabular format.

    this is how you declare a multidimensional array in C++:

    int arr[3][3]; // this declares a 3x3 array.
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // this declares a 3x3 array and initializes it with the values 1, 2, 3, 4, 5, 6, 7, 8, 9.
    

        */
    
    
    
    






    
    
   
    return 0;

}

int getSize() {
    return 5;
}