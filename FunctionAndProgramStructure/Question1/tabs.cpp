#include <iostream>

using namespace std;
struct integerPair{
    int integer1, integer2 {'\0'}; 
};

integerPair input() {
    integerPair twoInts;
    cout << "Please enter 2 integers: ";
    cin >> twoInts.integer1 >> twoInts.integer2;
    return twoInts;
}

int main () {
    /*Write a function called input that prompts for two integers and 
    then passes these back to the caller. The calling function should 
    simply add them together and output the result.*/

   /*A C++ function can return only one value. 
    However, you can return multiple values by wrapping them in a class or struct.*/
    
    integerPair integerInputs = input();
    int sum = integerInputs.integer1 + integerInputs.integer2;
    cout << "The sum of the integers provided is " << sum << endl;


    return 0;
}
