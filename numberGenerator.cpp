#include <iostream>
#include <cstdlib>
#include <ctime>

int randomNumber() {
        srand((unsigned)time(0));
        int randomNum = (rand() % 10) + 1;
        return randomNum;
}

int main()
{
    bool canGuess = true;
    int numOfGuesses = 1;

    std::cout << "Please guess a number between 1 - 10.\n";
    
    int secretNum = randomNumber();

    do {
        std::cout << "Guess " << numOfGuesses << " out of 3: ";
        int guess;
        std::cin >> guess;

        if (guess == secretNum) {
            std::cout << "CORRECT!!! The number is " << guess;
            canGuess = false;
        }
        else if (numOfGuesses >= 3) {
            std::cout << "You ran out of guesses!!!\nThe number was " << secretNum;
            canGuess = false;
        }
        else {
            std::cout << "You are WRONG!!!\n";
            numOfGuesses += 1;
        }
    } while (canGuess);
}
