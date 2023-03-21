#include <iostream>

using namespace std;

void displayWordCountAndWord(int numberOfCharacters, int startingPosition, string stringOfWords) {
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

    string HyphenConnectedWords;
    cout << "Please Enter a sentence with hyphens instead of spaces: ";
    cin >> HyphenConnectedWords;

    cout << "String Read: " << HyphenConnectedWords << endl;
    int lengthOfString = HyphenConnectedWords.length();
    int lastHyphenPosition = -1;

    cout << "Lenght of String " << lengthOfString << endl;

    for (size_t i = 0; i < lengthOfString; ++i) {
        if (HyphenConnectedWords[i] == '-') {

            int numberOfCharacters = (i - lastHyphenPosition) -1;
            displayWordCountAndWord(numberOfCharacters, lastHyphenPosition, HyphenConnectedWords);
            lastHyphenPosition = i;

        } else if (i == (lengthOfString-1)) {
            int numberOfCharacters = i - lastHyphenPosition;
            displayWordCountAndWord(numberOfCharacters, lastHyphenPosition, HyphenConnectedWords);
        } 
    }

    return 0;
}