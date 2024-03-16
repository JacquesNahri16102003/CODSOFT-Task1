#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
    while (1) {
        time_t t;
        srand(time(&t));

        int iterations = 0;

        int number = rand() % 100;

        cout << "Hello to number guessing game!" << endl << endl;

        int guess;

        cout << "Please enter your guess: ";
        cin >> guess;
        cout << endl;

        while (guess != number) {
            if (guess < number) {
                cout << "Guess is less than the number." << endl << "Please guess another time : ";
                cin >> guess;
                cout << endl;
            } else if (guess > number) {
                cout << "Guess is greater than the number." << endl << "Please guess another time : ";
                cin >> guess;
                cout << endl;
            }

            iterations++;
        }
        if (guess == number) {
            cout << "You guessed the number in " << iterations + 1 << " trials." << endl << endl;
        }
    }
    return 0;
}
