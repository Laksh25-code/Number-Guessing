//working
#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
 
int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    cout <<"\t\t WELCOME TO THE NUMBER GUSSING GAME\n";

    cout << "\tGuess the number (between 1 and 100): ";

    // Loop until the user guesses the correct number
    while (true) {
        cin >> guess;

        if (guess < randomNumber) {
            cout << "\t Too low.\t\n Try again: ";
        } else if (guess > randomNumber) {
            cout << "\t Too high.\t\n Try again: ";
        } else {
            cout << "\n\t\t Congratulations! You guessed the correct number: " << randomNumber << endl;
            break;
        }
    }

    return 0;
}
