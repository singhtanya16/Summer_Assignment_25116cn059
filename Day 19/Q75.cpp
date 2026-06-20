#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10], transpose[10][10];

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Find transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = A[i][j];
        }
    }

    // Display transpose
    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}