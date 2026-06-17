#include <iostream>
using namespace std;

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int result = add(num1, num2);

    cout << "Sum = " << result << endl;
    return 0;
}
