#include <iostream>
#include <string>
#include <array>

using namespace std;
struct Wordinfo{
        string text {'\0'};
        int length {0};
    };

void displayWordCountAndWord(int numberOfCharacters, int startingPosition, array<char, 256> stringOfWords) {
    cout << "[ " << numberOfCharacters << " ] ";
    for (int character = 1; character <= numberOfCharacters ; ++character) {
        cout << stringOfWords[startingPosition + character];
    } 
    cout << endl;
}

void updateLongestWord(int numberOfCharactersInNextWord, int startingPosition, array<char, 256> sentence, Wordinfo& longestWordSoFar) {
    startingPosition+=1;
    if (numberOfCharactersInNextWord > longestWordSoFar.length) {
        longestWordSoFar.length = numberOfCharactersInNextWord;
        longestWordSoFar.text = string(&sentence[startingPosition], &sentence[startingPosition + numberOfCharactersInNextWord]);
    }
}

int main() {
    /*
    Write a program that reads a line of words from the input and prints out the longest word and its length. 
    Make use of standard library types such as std::string, std::list, and std::vector
    */
    
    int position = -1;
    array<char, 256> lineOfText{'\0'};
    int lastSpacePosition = -1;
    Wordinfo longestWord;
    

    while (++position, std::cin.get(lineOfText[position]))
    {
        if (position == 255)
        {
            break;
        }
    }
        for (int i = 0; i < position+1; ++i) {
        if (lineOfText[i] == ' ') {

            int numberOfCharacters = (i - lastSpacePosition) - 1;
            displayWordCountAndWord(numberOfCharacters, lastSpacePosition, lineOfText);
            updateLongestWord(numberOfCharacters, lastSpacePosition, lineOfText, longestWord);
            lastSpacePosition = i;

        } else if (lineOfText[i] == '\0' || lineOfText[i] == '\n') {
            int numberOfCharacters = i - lastSpacePosition -1;
            displayWordCountAndWord(numberOfCharacters, lastSpacePosition, lineOfText);
            updateLongestWord(numberOfCharacters, lastSpacePosition, lineOfText, longestWord);
            i = 256;
        } 
    }
    cout << longestWord.text << longestWord.length;
    return 0;
}
