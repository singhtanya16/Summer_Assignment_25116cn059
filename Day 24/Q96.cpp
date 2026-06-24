#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};
    string result = "";

    // Traverse the string
    for (char ch : str) {
        if (!visited[ch]) {
            visited[ch] = true;
            result += ch;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}