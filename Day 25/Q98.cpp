#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Common characters are: ";

    for (int i = 0; i < str1.length(); i++) {
        bool found = false;

        // Check if character exists in second string
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                found = true;
                break;
            }
        }

        // Avoid printing duplicates
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (str1[k] == str1[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (found && !alreadyPrinted) {
            cout << str1[i] << " ";
        }
    }

    return 0;
}