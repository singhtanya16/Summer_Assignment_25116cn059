#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of arrays: ";

    for (int i = 0; i < n1; i++) {
        bool found = false;

        // Check if arr1[i] exists in arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }

        // Avoid printing duplicates
        bool duplicate = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                duplicate = true;
                break;
            }
        }

        if (found && !duplicate) {
            cout << arr1[i] << " ";
        }
    }

    return 0;
}