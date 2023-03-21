#include <iostream>

using namespace std;


int main() {
    // Output the decimal values of the following literals
    
    double decimalValueOfLiterals[] {0xf3f2, 0437, 'a'};
    cout << "The decimal value for 0xf3f2 is " << decimalValueOfLiterals[0] << endl;
    cout << "The decimal value for 0437 is " << decimalValueOfLiterals[1] << endl;
    cout << "The decimal value for 'a' is " << decimalValueOfLiterals[2] << endl;

    return 0;
}