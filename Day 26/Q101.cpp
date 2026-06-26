#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess, attempts = 0;

    // Generate random number between 1 and 100
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            cout << "Number = " << number << endl;
            cout << "Attempts = " << attempts << endl;
        }

    } while (guess != number);

    return 0;
}