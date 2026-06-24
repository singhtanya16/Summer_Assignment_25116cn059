#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++) {
        // Count consecutive occurrences
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        compressed += str[i];
        compressed += to_string(count);

        count = 1;
    }

    cout << "Compressed string: " << compressed << endl;

    return 0;
}