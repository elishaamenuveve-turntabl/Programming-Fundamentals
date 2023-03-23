#include <iostream>

using namespace std;

void output(int var) {
    cout << "Output: " << var << endl << "Type: int" << endl;
}
// void output(char var) {
//     cout << "Output: " << var << endl << "Type: char" << endl;
// }
// void output(float var) {
//     cout << "Output: " << var << endl << "Type: float" << endl;
// }
// void output(long var) {
//     cout << "Output: " << var << endl << "Type: long" << endl;
// }
void output(char var[]) {
    cout << "Output: " << var << endl << "Type: char[]" << endl;
}

int main () {
    /*Write a collection of functions to output values of different types onto the display. 
      All of the functions should have the same name, but be overloaded for int, char, float, long and std::string.
     The functions should also output their type.

    Write a program to test these functions. 
    Exercise the functions using both literal constants and variables.*/

    /*Which function(s) does the call to 
      output(3.14) attempt to bind to and why?
      it attempts to bind to the long, the char and the float overloads
      */

    char myname[] {"elisha"}; // binds to string
    output(3.14); //compilation error: call of overloaded 'output(double)' is ambiguous
    output("hi there");// binds to string
    output(myname);



    return 0;
}