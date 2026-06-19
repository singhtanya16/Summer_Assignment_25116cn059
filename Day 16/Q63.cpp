#include <iostream>
using namespace std;

int main() {
    int n, sum;
    
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the required sum: ";
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) {
        cout << "No pair found with the given sum." << endl;
    }

    return 0;
}