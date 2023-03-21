#include <iostream>
#include <array>

using namespace std;

int main() {
/* Using the C++ Standard Library string, 
create a type (using aliasing) for an array of 10 strings. 
Using the type, create an array and then read 10 string objects from the standard input, 
and output the string with the largest size.
 */

    // type aliasing is more readable 
    using tenStringObjects = string[10] ; 
    tenStringObjects inputs;
    int indexOfStringWithLargestSize = 0;

    cout << "Enter 10 words: ";
    for (int i = 0; i < 10; i++) {
        cin>> inputs[i];
        if (inputs[i].size() > inputs[indexOfStringWithLargestSize].size())
        indexOfStringWithLargestSize = i;
    }

    cout << "The (first occuring) string input with the largest size is " << inputs[indexOfStringWithLargestSize] << endl;

    return 0;
}