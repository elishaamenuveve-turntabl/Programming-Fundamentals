#include <iostream>

using namespace std;


void printOutEnumValues() {
    // Given the following enumeration type, write a program to output the values associated with each symbol.

    enum { RED, YELLOW, AMBER=YELLOW, GREEN};
     cout<<"The value for RED is " << RED << endl;
     cout<<"The value for YELLOW is " << YELLOW << endl;
     cout<<"The value for AMBER is " << AMBER << endl;
     cout<<"The value for GREEN is " << GREEN << endl;
}


int main () {
    printOutEnumValues();
    return 0;
}