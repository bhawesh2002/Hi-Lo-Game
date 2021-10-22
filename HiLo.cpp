#include "declarations.h"

int main()
{
    std::cout << "=======*Welcome to the HI-Lo game*=======" << '\n'
              << "Instructions for the game\n"
              << "1)Number will range from 1-10\n"
              << "2)You will get 4 outputs{\"bingo\",\"Hi\",\"Lo\",\"Far Away\"}\n";
    int no_of_turns{0};         // No of times the user has played the game
    int no_of_rounds{0};        // No of rounds user played on one go
    int total_score{};          // Score of the user
    int opt{1};                 // default value of opt variable for in-game_opts
    bool mark_1 = begin_game(); // Store's the value returned by begin_game() function
    bool mark_2 = false;
    if (mark_1 == true) // Default value for mark_2 variable
    {
        no_of_rounds++;
        std::cout << "=-=-=-=-=-ROUND" << no_of_rounds << "-=-=-=-=-=\n";
    }
    else if (mark_1 == false)
    {
        return 0;
    }

    while (mark_2 != true)
    {
        no_of_turns++;
        mark_2 = check();
        if (mark_2 == true)
        {
            total_score++;
            std::cout << "No of Round's Played: " << no_of_rounds << '\n';
            std::cout << "No of Attempt's(This Round): " << no_of_turns << '\n';
            std::cout << "Your Score is " << total_score << '\n';
            opt = in_game_opts();
            switch (opt)
            {
            case 1:
                no_of_rounds++;
                std::cout << "=-=-=-=-=-ROUND" << no_of_rounds << "-=-=-=-=-=\n";
                mark_2 = false; // Reset value of mark_2 variable
                continue;
            case 2:
                std::cout << "<<<<<<<Restarting>>>>>>\n";
                no_of_rounds = 1;
                std::cout << "=-=-=-=-=-ROUND" << no_of_rounds << "-=-=-=-=-=\n";
                no_of_turns = 0;
                total_score = 0;
                mark_2 = false; // Reset value of mark_2 variable
                continue;
            case 3:
                std::cout << "*****Thank You*****" << '\n';
                return 0;
            }
        }
    }
    return 0;
}