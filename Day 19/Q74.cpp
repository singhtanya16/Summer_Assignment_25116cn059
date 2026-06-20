#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int A[10][10], B[10][10], diff[10][10];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Subtract matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display result
    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}