#include <iostream>

using namespace std;


int main() {
    // Write a program in which you define variables of the following types

    int integerVariable = 0;
    int* integerPointerVariable = &integerVariable;
    int& integerReferenceVariable = integerVariable;
    const int constantInteger = 120;

    // Perform the following actions on the variables
    
    integerVariable = 5;
    ++*integerPointerVariable;
    ++integerReferenceVariable;
    cout << "The value of the integer variable is " << integerVariable << endl;

    // What happens if you attempt to change the value of the constant?
    // constantInteger = 6; gives an error for attempted assignment of read_only variable.
    return 0;
}