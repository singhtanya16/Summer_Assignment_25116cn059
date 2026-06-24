#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Check if lengths are equal
    if (str1.length() != str2.length()) {
        cout << "Strings are not rotations of each other." << endl;
    }
    else {
        // Concatenate str1 with itself
        string temp = str1 + str1;

        // Check if str2 is a substring of temp
        if (temp.find(str2) != string::npos)
            cout << "Strings are rotations of each other." << endl;
        else
            cout << "Strings are not rotations of each other." << endl;
    }

    return 0;
}