#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main() {
    /*
    Write a program that reads a line of words from the input and prints out the longest word and its length. 
    Make use of standard library types such as std::string, std::list, and std::vector
    */
    
    string sentence {'\0'};
    string longestWord {'\0'};;
    cout << "Please Enter a Sentence: ";
    getline(cin, sentence);
    stringstream stringStream(sentence);

    string word;
    while(stringStream >> word) {
        if (word.length() > longestWord.length())
            longestWord = word;
    }
    cout << "Longest Word" << longestWord << " [ " << longestWord.length() << " characters ] ";
    
    return 0;
}
