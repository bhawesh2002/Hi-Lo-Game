#include "declarations.h"

int main()
{
    std::cout << "=======*Welcome to the HI-Lo game*=======" << '\n'
              << "Instructions for the game\n"
              << "1)Number will range from 1-10\n"
              << "2)You will get 4 outputs{\"bingo\",\"Hi\",\"Lo\",\"Far Away\"}\n";
    int no_of_turns{};                  //No of times the user has played the game
    int total_score{};                        //Score of the user
    random_number();
    int test {check()};

    return 0;
}