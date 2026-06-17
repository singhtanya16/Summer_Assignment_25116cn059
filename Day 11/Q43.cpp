#include <iostream>
using namespace std;

// Function to check prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false; // divisible by i
    }
    return true; // no divisors found
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

