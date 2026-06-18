#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Store the last element
    int temp = arr[n - 1];

    // Shift elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the beginning
    arr[0] = temp;

    // Display the rotated array
    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}