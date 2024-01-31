#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void print_array(std::vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    // int guesses[250];
    std::vector<int> guesses;
    // int guess_count = 0;

    int random = rand() % 251;
    std::cout << "Guess a number: ";

    while (true)
    {
        int guess;
        std::cin >> guess;

        // guesses[guess_count++] = guess; // increment count after using index
        guesses.push_back(guess); // increment count after using index

        if (guess == random)
        {
            std::cout << "You win!\n";
            std::cout << "Guess history: \n";
            print_array(guesses);

            std::cout << "Took you " << guesses.size() << " guesses to get it right!" << std::endl;

            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low\n";
        }
        else
        {
            std::cout << "Too high\n";
        }
    }
    std::ifstream input("best_score.txt");
    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");

    int count = guesses.size();
    if (count < best_score)
    {
        output << count;
    }
    else
    {
        output << best_score;
    }
}

int main()
{
    srand(time(NULL)); // seed random number
    int choice;

    do
    {
        std::cout << "0. Quit\n1. Play 'Guess a number'\n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing\n";
            break;
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}