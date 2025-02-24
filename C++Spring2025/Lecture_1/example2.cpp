#include <iostream> 
using namespace std;

int main() {
    int a, b, c;
    cout<<"Enter 2 numbers"<<endl;  // cout is used to print the text in the console. 
    cin>>a>>b; // cin is used to take input from the user.
    c=a+b; // This is how you add 2 numbers in C++. You assigne the sum of the 2 numbers to a new variable. (in this case c)
    cout<<"The sum of the 2 numbers is: "<<c<<endl;
    return 0;
}