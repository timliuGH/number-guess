#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
    srand(time(0));
    int randomNumber = (rand() % (max - min + 1)) + min;
}

int main()
{
    std::cout << "\nGuess a number from 1 to 100.\n" << std::endl;
    // Get a random number from 1 to 100 for the player to guess.
    int min = 1;
    int max = 100;
    int randomNumber = getRandomNumber(min, max);
    std::cout << "DEBUG: randomNumber is " << randomNumber << std::endl;

    // Prompt player for guess.
    std::cout << "Enter your guess." << std::endl;
    int guess;
    std::cin >> guess;
    int guesses = 1;
    while (guess != randomNumber)
    {
        if (guess > randomNumber)
            std::cout << "Too high - try again." << std::endl;
        else if (guess < randomNumber)
            std::cout << "Too low - try again." << std::endl;
        std::cin >> guess;
        guesses++;
    }
    std::cout << "You guessed it in " << guesses << " tries." << std::endl;

    return 0;
}
