#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}