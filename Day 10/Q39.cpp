#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // print ascending numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // print descending numbers
        for (int l = i - 1; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}
