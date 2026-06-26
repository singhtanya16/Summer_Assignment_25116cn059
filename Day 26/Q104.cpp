#include <iostream>
using namespace std;

int main() {
    int score = 0, answer;

    cout << "===== Welcome to the Quiz Application =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for Object-Oriented Programming?\n";
    cout << "1. C\n2. HTML\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 366\n3. 364\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Display Result
    cout << "\n===== Quiz Finished =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent! 🎉";
    else if (score == 2)
        cout << "Good Job! 👍";
    else
        cout << "Keep Practicing! 😊";

    return 0;
}