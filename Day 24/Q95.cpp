#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str, word, longestWord;
    
    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    // Extract words one by one
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << longestWord.length() << endl;

    return 0;
}