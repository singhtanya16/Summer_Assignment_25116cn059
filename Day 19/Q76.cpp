#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int arr[10][10];
    int sum = 0;

    // Input matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Find sum of diagonal elements
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    // Display result
    cout << "Sum of diagonal elements = " << sum;

    return 0;
}