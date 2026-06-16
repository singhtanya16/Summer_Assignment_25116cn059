#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // print ascending characters
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        // print descending characters
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
