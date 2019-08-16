#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Get a random number from 1 to 100 for the player to guess.
    srand(time(0));
    int max = 100;
    int min = 1;
    int randomNumber = (rand() % (max - min + 1)) + min;
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
