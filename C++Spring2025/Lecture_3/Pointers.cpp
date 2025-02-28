#include <iostream>
using namespace std;

/*   Pointers

What is a pointer? 
    - A pointer is a compound type that "points to" another object. 
      they are used for indirect access to other objects.


Reference          vs             Pointer 

    - it is similar to a reference in that it "refers to" another object. 
      However, a pointer is an object in its own right. 
      A reference is not an object. It is just another name for an object.

    - once a reference is initialized with an object, it cannot be changed to refer to another object. 
      A pointer can be changed to point to another object at any time.

    - When you create a pointer, it actually takes space in memory, unlike a reference. 
      A reference does not take up any space in memory. It is just another name for an object.

    - A pointer can be NULL. A reference cannot be NULL. It must refer to an object.




    A good thing to note: Anything a reference is able to do, a pointer can do, not vice versa.  
*/

int main() {

// Pointer Declaration: How do we declare a pointer? look below.

int *ip1, ip2; // both ip1 and ip2 are pointers to an integer. 

double dp, *dp2; // dp is a normal variable of type double. dp2 is a pointer to a double.


/* 
   What do pointer hold exactly?

   - A pointer holds the address of an object. We get the address of an object by using the address-of operator (&).
      
             ptr   (This is a pointer variable named ptr)
              |
              |
              V

     |--------------------|
  _  |  0x7ffaauhasdd4    |  ----> address of object it points to.
  |  |                    |
  |  |____________________|
  |     0x7ff98d9230923u    -----------> address of pointer variable ptr.
  |
  |
  |
  |  |--------------------|
  |  |  0x7ffaauhasdd4    |  
  |  |                    |
  |  |____________________|
  |----> 0x7ff98d9230923u    
  
*/

// here is how pointer initialization and dereferencing works:

int ival = 50; // pretend the address of ival is 0x7ffaauhasdd4
int *p = &ival; // P holds the address of val. P is a pointer to an ival. P now holds the address of ival, which is 0x7ffaauhasdd4.

// ival has an address in memory. We use the address-of operator (&) to get the address of ival. We then store that address in p.

// now we can use the pointer to access the object it points to. This is called "dereferencing" the pointer. We can now use p to access ival.

cout << p << endl; // This will print the address of ival.
cout << *p << endl; // This will print the value of ival. This is called dereferencing the pointer.

// The star (*) is used to dereference a pointer. It is also used to declare a pointer. This is why pointers can be confusing. The same symbol is used for two different things.
// What do I mean by dereferencing? Dereferencing means getting the value of the object that the pointer points to. In the example above, *p gets the value of ival.

// as of this point, (*) has 3 meanings in C++, so far we know its used for multiplication, declaring a pointer, and dereferencing a pointer.


//------------------------------------------------------------------------------------------------------------------------------------------------

int firstvalue = 100, secondvalue = 200; 

study the example we left off.






}