#include "declarations.h"

int main()
{
    std::cout << "=======*Welcome to the HI-Lo game*=======" << '\n'
              << "Instructions for the game\n"
              << "1)Number will range from 1-10\n"
              << "2)You will get 4 outputs{\"bingo\",\"Hi\",\"Lo\",\"Far Away\"}\n";
    int no_of_turns{};                  //No of times the user has played the game
    int total_score{};                        //Score of the user
    begin_game();
    random_number();
    while (check() != int (1))
    {
        no_of_turns++;
        user_input();
        check();
        if (check() == int (1))
        {
            total_score = total_score + score();
            std::cout << "Your Score is: " << total_score << '\n';
        }
        
    }
    

    return 0;
}