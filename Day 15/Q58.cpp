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

    // Store the first element
    int temp = arr[0];

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Place the first element at the end
    arr[n - 1] = temp;

    // Display the rotated array
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}