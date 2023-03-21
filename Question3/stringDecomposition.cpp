#include <iostream>
#include <cstring>

using namespace std;

void displayWordCountAndWord(int numberOfCharacters, int startingPosition, char stringOfWords[]) {
    cout << "[ " << numberOfCharacters << " ] ";
    for (int character = 1; character <= numberOfCharacters ; ++character) {
        cout << stringOfWords[startingPosition + character];
    } 
    cout << endl;
}

int main () {
    
    /* Write a program which reads a single line of hyphen connected words and 
    outputs the words one per line, 
    with a count of the number of characters in each.
     Your solution should employ primitive C style strings, using character arrays and pointers.
    */

    char HyphenConnectedWords[256] {'\0'};
    int lengthOfString = 256;

    cout << "Please Enter a sentence with hyphens instead of spaces: ";
    cin >> HyphenConnectedWords;

    cout << "String Read: " << HyphenConnectedWords << endl;
    int lastHyphenPosition = -1;

    cout << "Length of String " << lengthOfString << endl;

    for (int i = 0; i < lengthOfString; ++i) {
        if (HyphenConnectedWords[i] == '-') {

            int numberOfCharacters = (i - lastHyphenPosition) -1;
            displayWordCountAndWord(numberOfCharacters, lastHyphenPosition, HyphenConnectedWords);
            lastHyphenPosition = i;

        } else if (HyphenConnectedWords[i] == '\0') {
            int numberOfCharacters = i - lastHyphenPosition -1;
            displayWordCountAndWord(numberOfCharacters, lastHyphenPosition, HyphenConnectedWords);
            i = 256;
        } 
    }

    return 0;
}