#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(nullptr));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "NUMBER GUESSING GAME" << endl;

    while (true) {
        cout << "Guess the number (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number, which is " << secretNumber << "." << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}
