#include "declarations.h"

int main()
{
    std::cout << "=======*Welcome to the HI-Lo game*=======" << '\n'
              << "Instructions for the game\n"
              << "1)Number will range from 1-10\n"
              << "2)You will get 4 outputs{\"bingo\",\"Hi\",\"Lo\",\"Far Away\"}\n";
    int no_of_turns{0};  // No of times the user has played the game
    int no_of_rounds{0}; // No of rounds user played on one go
    int total_score{};   // Score of the user
    int opt{1};          // default value of opt variable for in-game_opts
    bool mark_1 = begin_game();
    bool mark_2 = false;    
    while (mark_2 != true)
    {
        no_of_turns++;
        mark_2 = check();
        if (mark_2 == true)
        {
            std::cout << "Correct guess on " << no_of_turns << "th attempt" << '\n';            
        }
    }
    return 0;
}