#include <iostream>
#include <string>

using namespace std;

int main() {
    /* Write a program to read a word from the input into a  std::string. 
    Convert the std::string to an intrinsic character array (check here for the c_str method). 
    Using the const char* pointer, iterate through each of the characters in the character array and output to the display.*/
    string word;
    cout << "Please enter a word: ";
    cin >> word;
    cout << "The word you entered was " << word << endl;

    // c_str() returns a constant pointer to a string which represents the value of the string object
    const char* wordPointer = word.c_str();

    cout << "The value of the pointer returned when c_str() was used on the entered word variable is " << wordPointer << endl;

    for (int i; i < word.length(); i++) {
        cout << *(wordPointer + i) << endl;
    }






    return 0;
}